/*
 *
 *  ChatCell.swift
 *  ZDCChatAPI Sample App
 *
 *  Created by Zendesk on 11/07/2016.
 *
 *  Copyright (c) 2016 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zopim Chat SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Chat SDK.
 *
 */

import UIKit
import ScreenMeetSDK

/**
 * Regex syntax sugar
 */
func matchesForRegexInText(regex: String!, text: String!) -> [String] {
  
  do {
    let regex = try NSRegularExpression(pattern: regex, options: [])
    let nsString = text as NSString
    let results = regex.matchesInString(text, options: [], range: NSMakeRange(0, nsString.length))
    
    return results.map { nsString.substringWithRange($0.range)}
  } catch let error as NSError {
    print("invalid regex: \(error.localizedDescription)")
    return []
  }
}

/// Chat General Cell
class ChatCell: UITableViewCell{
  
  /// Bubble view
  @IBOutlet var bubbleView: BubbleView!
  
  


  /*
  let nsString = text as NSString
  let results = regex.matchesInString(text,
                                      options: [], range: NSMakeRange(0, nsString.length))
  return results.map { nsString.substringWithRange($0.range)}
  */
  
  /// List of chat events received
  var chatEvent: ChatUIEvent! {
    didSet {
      bubbleState = chatEvent.confirmed ? .Confirmed : .NotConfirmed
      bubbleView.timestamp = chatEvent.timeStamp
      
  
      
    }
  }
  
}


extension ChatCell: ChatCellType {
  
  var bubbleState: BubbleState {
    get {
      return bubbleView.bubbleState
    }
    
    set {
      bubbleView.bubbleState = newValue
    }
  }
}

//MARK: - Message Cell

/// Chat Message General Cell
class MessageChatCell: ChatCell {
  
  @IBOutlet var messageLabel: UILabel!
  
  private var scanned: Bool = false;
  
  override var chatEvent: ChatUIEvent! {
    didSet {
      super.chatEvent = chatEvent
      if let chatTextCell = chatEvent as? ChatMessageEventType {
        
        
        //de-dupes events because this fires a lot of times per message
        if (!scanned) {
          textContent = chatTextCell.text
          
          let scanResult = matchesForRegexInText("^requestScreenShare\\|([\\w\\d]+)$", text: textContent);
          
          if (scanResult.count > 0) {
            let parts = scanResult[0].characters.split{$0 == "|"}.map(String.init);
            let authToken = parts[1];
            
            print("######### ScreenShare Request Detected:", authToken, "\nRemoving object from chat cell and replacing with button");
            
            //Clear out the cell
            
            for subview in self.subviews {
              subview.hidden = true;
            }
            
            //Add replacement Object
            
            
            let button = UIButton(type: .System) // let preferred over var here
//            button.frame = CGRectMake(0, 0, 300, 75)
            button.backgroundColor = UIColor.orangeColor();
            button.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal);
            button.contentEdgeInsets = UIEdgeInsetsMake(10, 10, 10, 10);
            button.layer.cornerRadius = 10;
            button.clipsToBounds = true
            button.setTitle("Share Screen With Agent", forState: UIControlState.Normal)
            
      
            //            button.addTarget(self, action: "Action:", forControlEvents: UIControlEvents.TouchUpInside)
            button.actionHandle(controlEvents: UIControlEvents.TouchUpInside, ForAction:{() -> Void in
              print("Touch Detected!", authToken);
              
              
              ScreenMeet.sharedInstance().authenticate(authToken) { (status) in
                // Check callback status
                if (status == .SUCCESS) {
                  //Authentication is successful
                  
                  if (ScreenMeet.sharedInstance().getStreamState() != StreamStateType.ACTIVE) {
                  
                    ScreenMeet.sharedInstance().startStream()  { (status) in
                      if (status == .SUCCESS) {
                        print("Meeting stream started.")
                      } else {
                        print("Error: \(status)")
                      }
                      
                    }
                  } else {
                    print("ALREADY SCREEN SHARING");                    
                  }
                  
                  
                  print("SUCCESSFUL AUTH");
                } else {
                  print("INVALID AUTH");
                }
              }
              
            })
  
            button.translatesAutoresizingMaskIntoConstraints = false
//            xx.font = UIFont.systemFontOfSize(11)

            self.addSubview(button)
            
            
            
          }
          

          
          scanned = true;
        }
        

        
        
      }
      
      
    }
  }
}



extension MessageChatCell: TextCellType {
  
  var textContent: String? {
    set {
      self.messageLabel.text = newValue
    }
    
    get {
      return self.messageLabel.text
    }
  }
}

//MARK: - Image Cell

/// Chat Image General Cell
class ImageChatCell: ChatCell {
  
  @IBOutlet var imageContentView: UIImageView!
  @IBOutlet var heightConstraint: NSLayoutConstraint!
  
  override var chatEvent: ChatUIEvent! {
    didSet {
      super.chatEvent = chatEvent
      
      if let chatImageCell = chatEvent as? ChatImageEventType {
        if let image = chatImageCell.image {
          imageContent = image
        }
        if let url = chatImageCell.imageURL {
          setImageURL(url)
        }
      }
    }
  }
}

extension ImageChatCell: ImageCellType {
  var imageContent: UIImage? {
    set {
      self.imageContentView.image = newValue
      updateHeight()
    }
    
    get {
      return self.imageContentView.image
    }
  }
  
  func setImageURL(url: NSURL?) {
    self.imageContentView.sd_setImageWithURL(url)
    
    self.imageContentView.contentMode = .Center
    setPlaceholderHeight()
    
    self.imageContentView.image = UIImage(named: "placeholder")
    self.imageContentView.sd_setImageWithURL(url, placeholderImage: UIImage(named: "placeholder"))
    { (image, error, cache, url) in
      
      if image != nil {
        self.imageContentView.contentMode = .ScaleAspectFit
        self.updateHeight()
      }
    }
  }
  
  override func prepareForReuse() {
    self.imageContentView.sd_cancelCurrentImageLoad()
  }
  
  func updateHeight() {
    guard let size = imageContentView.image?.size else { return }
    guard let viewWidth = imageContentView.superview?.frame.width else { return }
    
    let height = (size.height * viewWidth) / size.width
    self.heightConstraint.constant = height
  }
  
  func setPlaceholderHeight() {
    guard let viewWidth = imageContentView.superview?.frame.width else { return }
    
    self.heightConstraint.constant = viewWidth
  }
}
