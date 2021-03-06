//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class GameCenterGameBriefInfo, NSString;

@interface RecoItemData : MMObject <PBCoding>
{
    unsigned int index;
    NSString *iconUrl;
    NSString *title;
    NSString *recommendDesc;
    NSString *jumpUrl;
    GameCenterGameBriefInfo *appItem;
}

+ (void)initialize;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(retain, nonatomic) GameCenterGameBriefInfo *appItem; // @synthesize appItem;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *recommendDesc; // @synthesize recommendDesc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

