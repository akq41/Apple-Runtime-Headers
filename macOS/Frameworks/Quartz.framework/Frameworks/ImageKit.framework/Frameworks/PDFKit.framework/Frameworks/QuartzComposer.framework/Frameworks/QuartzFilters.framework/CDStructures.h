//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct QuartzFilterHalftoneInfo {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct QuartzFilterImageInfo;

struct QuartzFilterOptionsInfo {
    struct QuartzFilterProfileSet *_field1;
    struct QuartzFilterProfileSet *_field2;
    struct QuartzFilterProfileSet *_field3;
    struct QuartzFilterProfileSet *_field4;
    struct QuartzFilterProfileSet *_field5;
    struct QuartzFilterProfileSet *_field6;
    struct QuartzFilterProfileSet *_field7;
    struct QuartzFilterProfileSet *_field8;
    struct QuartzFilterProfileSet *_field9;
    unsigned int (*_field10)[4][5];
    unsigned int (*_field11)[4][5];
    unsigned int (*_field12)[4][5];
    int (*_field13)[7][4][5];
    struct QuartzFilterImageInfo *_field14;
    void *_field15;
    struct QuartzFilterImageInfo *_field16;
    void *_field17;
    struct QuartzFilterHalftoneInfo *_field18;
    struct QuartzFilterShadingInfo *_field19;
    struct QuartzFilterPDFX3Info *_field20;
    void *_field21;
    struct QuartzFilterPDFSpecialInfo *_field22;
};

struct QuartzFilterPDFSpecialInfo {
    _Bool _field1;
};

struct QuartzFilterPDFX3Info;

struct QuartzFilterProfileSet;

struct QuartzFilterShadingInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned char _field3;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

