//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface RankSummaryData : MMObject <PBCoding>
{
    unsigned int actionId;
    unsigned int positionId;
    NSString *title;
    NSString *desc;
    NSString *topUserName;
    NSString *jumpUrl;
    NSString *externInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo;
@property(nonatomic) unsigned int positionId; // @synthesize positionId;
@property(nonatomic) unsigned int actionId; // @synthesize actionId;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *topUserName; // @synthesize topUserName;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
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
