//
//  CKSubscribeAlertView.h
//  ChimpKit3
//
//  Created by Drew Conner on 1/7/13.
//  Copyright (c) 2013 MailChimp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CKSubscribeAlertView : UIAlertView <UITextFieldDelegate, UIAlertViewDelegate>


@property  (nonatomic, strong) block_with_one_param successBlock;
@property  (nonatomic, strong) simplest_block cancelBlock;
@property  (nonatomic, strong) block_with_one_param reshowDueToInvalidEmail;

- (id)initWithTitle:(NSString *)title
            message:(NSString *)message
             listId:(NSString *)aListId
  cancelButtonTitle:(NSString *)cancelButtonTitle
subscribeButtonTitle:(NSString *)subscribeButtonTitle;

- (id)initWithTitle:(NSString *)title
            message:(NSString *)message
             listId:(NSString *)aListId
  cancelButtonTitle:(NSString *)cancelButtonTitle
subscribeButtonTitle:(NSString *)subscribeButtonTitle
        doubleOptIn:(BOOL)doubleOptIn
              email:(NSString*) email;



@end
