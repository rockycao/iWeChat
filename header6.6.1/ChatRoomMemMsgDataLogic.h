//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ChatRoomMemMsgDataLogicDelegate;

@interface ChatRoomMemMsgDataLogic : NSObject
{
    NSString *m_nsChatName;
    NSString *m_nsMemName;
    id <ChatRoomMemMsgDataLogicDelegate> m_delegate;
    unsigned int m_uiFromID;
    unsigned int m_uiCreateTime;
    unsigned int m_uiLeftCount;
}

- (void).cxx_destruct;
- (void)getMsgsLimit:(int)arg1;
- (_Bool)isMsgMatch:(id)arg1;
- (id)initWithChat:(id)arg1 memName:(id)arg2 delegate:(id)arg3;

@end
