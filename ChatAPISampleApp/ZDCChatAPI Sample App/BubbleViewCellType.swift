/*
 *
 *  BubbleViewCellType.swift
 *  ZDCChatAPI Sample App
 *
 *  Created by Zendesk on 08/07/2016.
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

let agentBackgroundColor = UIColor(red:0.95, green:0.94, blue:0.94, alpha:1.0)
let visitorBackgroundColor = UIColor(red:0.91, green:0.42, blue:0.39, alpha:1.0)

let agentMessageTextColor = UIColor.blackColor()
let visitorMessageTextColor = UIColor.whiteColor()

let agentTimestampTextColor = UIColor.darkGrayColor()
let visitorTimestampTextColor = UIColor.whiteColor()

/// BubbleView Color Extension
extension BubbleView.CellType {
  
  var cellBackgroundColor: UIColor {
    let isAgent = self == .Agent
    return isAgent ? agentBackgroundColor : visitorBackgroundColor
  }
  
  var messageTextColor: UIColor {
    let isAgent = self == .Agent
    return isAgent ? agentMessageTextColor : visitorMessageTextColor
  }
  
  var timestampTextColor: UIColor {
    let isAgent = self == .Agent
    return isAgent ? agentTimestampTextColor : visitorTimestampTextColor
  }
  
}
