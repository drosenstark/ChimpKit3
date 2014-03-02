//
//  CKSubscribeAlertView.h
//  ChimpKit3
//
//  Created by Drew Conner on 1/7/13.
//  Copyright (c) 2013 MailChimp. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^block_with_one_param_for_ck)(id);

@interface CKSubscribeAlertView : UIAlertView <UITextFieldDelegate, UIAlertViewDelegate> 


@property  (nonatomic, strong) block_with_one_param_for_ck successBlock;
@property  (nonatomic, strong) dispatch_block_t cancelBlock;

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
