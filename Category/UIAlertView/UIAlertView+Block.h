//
//  UIAlertView+Block.h
//  BFSports
//
//  Created by JokerAtBaoFeng on 16/5/5.
//  Copyright © 2016年 BaoFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^CompleteBlock)(NSInteger ButtonIndex);

@interface UIAlertView(Block)
-(void)showAlertViewWithCompleteBlock:(CompleteBlock)block;
@end
