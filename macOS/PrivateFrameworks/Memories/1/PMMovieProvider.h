//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMSaveProvider, VEKProduction, VEKResult;
@protocol PMMovieProviderDelegate;

@interface PMMovieProvider : NSObject
{
    BOOL _isEditing;
    VEKProduction *_production;
    id <PMMovieProviderDelegate> _providerDelegate;
    VEKResult *_lastResult;
    VEKProduction *_lastEditingProduction;
    PMSaveProvider *_saveProvider;
    unsigned long long _currentEditID;
}

@property(nonatomic) unsigned long long currentEditID; // @synthesize currentEditID=_currentEditID;
@property(retain, nonatomic) PMSaveProvider *saveProvider; // @synthesize saveProvider=_saveProvider;
@property(retain, nonatomic) VEKProduction *lastEditingProduction; // @synthesize lastEditingProduction=_lastEditingProduction;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) VEKResult *lastResult; // @synthesize lastResult=_lastResult;
@property(nonatomic) __weak id <PMMovieProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property(retain, nonatomic) VEKProduction *production; // @synthesize production=_production;
- (void).cxx_destruct;
- (void)cancelEdit;
- (void)refreshPlayerItem;
- (id)initWithProduction:(id)arg1;

@end

