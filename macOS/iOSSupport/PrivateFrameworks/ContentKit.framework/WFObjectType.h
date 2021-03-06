//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFType.h>

@class NSBundle, NSString;

@interface WFObjectType : WFType
{
    Class _objectClass;
    NSBundle *_bundle;
    NSString *_className;
}

+ (BOOL)supportsSecureCoding;
+ (id)typeWithClassName:(id)arg1 frameworkName:(id)arg2 location:(unsigned long long)arg3;
+ (id)typesWithClasses:(id)arg1;
+ (id)typeWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (BOOL)conformsToClass:(Class)arg1;
- (BOOL)conformsToType:(id)arg1;
- (BOOL)isEqualToClass:(Class)arg1;
- (BOOL)isEqualToType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *string;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithObjectClass:(Class)arg1;
- (id)initWithClassName:(id)arg1 inBundle:(id)arg2;

@end

