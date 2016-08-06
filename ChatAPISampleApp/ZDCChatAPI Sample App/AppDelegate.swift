/*
 *
 *  AppDelegate.swift
 *  ZDCChatAPI Sample App
 *
 *  Created by Zendesk on 07/07/2016.
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



@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

  var window: UIWindow?
  
  func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
    // Override point for customization after application launch.
    
    ScreenMeet.initSharedInstance("ZDChatPOC", environment: .PRODUCTION)
    

    
    self.window?.tintColor = UIColor.whiteColor()
    return true
  }
  
}



extension UIViewController {
  func showToast(message: String) {
    let toastLabel = UILabel(frame: CGRectMake(self.view.frame.size.width/2 - 150, self.view.frame.size.height-100, 300, 60))
    toastLabel.backgroundColor = UIColor.blackColor()
    toastLabel.textColor = UIColor.whiteColor()
    toastLabel.textAlignment = NSTextAlignment.Center;

    toastLabel.numberOfLines = 0;
    self.view.addSubview(toastLabel)
    toastLabel.text = message
    toastLabel.font = toastLabel.font.fontWithSize(12)
    toastLabel.alpha = 1.0
    toastLabel.layer.cornerRadius = 5;
    toastLabel.clipsToBounds  =  true
    
    UIView.animateWithDuration(2.0, delay: 4, options: .CurveEaseOut, animations: {
      
      toastLabel.alpha = 0.0
      
      }, completion: nil)
  }
  
}


extension UINavigationController {
  
  
  func onRotate(ww: UIButton) {
   
    
    //
    
    
  }
  
  public override func viewDidLoad() {
    super.viewDidLoad();
    

    
    let widget = UIButton(frame: CGRectMake(self.view.frame.size.width - 130, 25, 130, 25) )
    
    widget.backgroundColor = UIColor.redColor()
    
    self.view.addSubview(widget);
    widget.setTitle("stop screenshare", forState: UIControlState.Normal)
    widget.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
    widget.titleLabel!.font = widget.titleLabel!.font.fontWithSize(12);
    widget.layer.cornerRadius = 5
    widget.contentEdgeInsets = UIEdgeInsetsMake(5,5,5,5)
    widget.clipsToBounds  =  true
    widget.hidden = true;
    widget.addTarget(self, action: #selector(stopScreenShare), forControlEvents: .TouchUpInside)
    widget.translatesAutoresizingMaskIntoConstraints = false

    NSLayoutConstraint(item: widget, attribute: .Trailing, relatedBy: .Equal, toItem: view, attribute: .TrailingMargin, multiplier: 1.0, constant: 0.0).active = true
    NSLayoutConstraint(item: widget, attribute: .Top, relatedBy: .Equal, toItem: view, attribute: .Top, multiplier: 1.0, constant: 15).active = true
    
    ScreenMeet.sharedInstance().onStreamStateChanged({newState, reason in
      
      if (ScreenMeet.sharedInstance().getStreamState() == StreamStateType.ACTIVE) {
        self.showToast("You are sharing your screen. Tap \"Stop Screenshare\" on the top right to stop.")
        widget.hidden = false;
      } else if (ScreenMeet.sharedInstance().getStreamState() == StreamStateType.STOPPED) {
        widget.hidden = true;
        self.showToast("You are no longer sharing your screen.")
      }
      
    })
    
  }
  
  func stopScreenShare() {
    ScreenMeet.sharedInstance().stopStream()
  }
}

extension UIButton {
  
  
  private func actionHandleBlock(action:(() -> Void)? = nil) {
    struct __ {
      static var action :(() -> Void)?
    }
    if action != nil {
      __.action = action
    } else {
      __.action?()
    }
  }
  
  @objc private func triggerActionHandleBlock() {
    self.actionHandleBlock()
  }
  
  func actionHandle(controlEvents control :UIControlEvents, ForAction action:() -> Void) {
    self.actionHandleBlock(action)
    self.addTarget(self, action: #selector(UIButton.triggerActionHandleBlock), forControlEvents: control)
  }
}