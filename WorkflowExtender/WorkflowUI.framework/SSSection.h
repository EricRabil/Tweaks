//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SSSection : NSObject <NSCopying>
{
    _Bool _expanded;
    NSMutableArray *_items;
    id _sectionIdentifier;
    NSString *_header;
    NSString *_footer;
    Class _headerClass;
    Class _footerClass;
    double _headerHeight;
    double _footerHeight;
}

+ (id)sectionWithNumberOfItems:(unsigned long long)arg1 header:(id)arg2 footer:(id)arg3 identifier:(id)arg4;
+ (id)sectionWithNumberOfItems:(unsigned long long)arg1;
+ (id)sectionWithItems:(id)arg1 header:(id)arg2 footer:(id)arg3 identifier:(id)arg4;
+ (id)sectionWithItems:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) __weak Class footerClass; // @synthesize footerClass=_footerClass;
@property(nonatomic) __weak Class headerClass; // @synthesize headerClass=_headerClass;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) id sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (id)init;

@end

