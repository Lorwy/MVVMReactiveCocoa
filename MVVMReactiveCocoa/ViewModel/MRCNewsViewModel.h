//
//  MRCNewsViewModel.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/1/10.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCTableViewModel.h"

@interface MRCNewsViewModel : MRCTableViewModel

@property (assign, nonatomic, readonly) BOOL isCurrentUser;
@property (strong, nonatomic, readonly) RACCommand *didClickLinkCommand;

@end
