//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBFakeBlur.h"

@class NSString, SBFWallpaperView, SBWallpaperController, UIImageView;

@interface _SBFakeBlurView : UIView <_SBFakeBlur>
{
    unsigned long long _transformOptions;
    long long _requestedStyle;
    long long _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    _Bool _fullscreen;
    UIImageView *_imageView;
    id <_SBFakeBlurObserver> _observer;
    SBWallpaperController *_wallpaperController;
}

+ (id)_imageForStyle:(inout long long *)arg1 withSource:(id)arg2 rootSettings:(id)arg3;
@property(readonly, nonatomic) __weak SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) __weak id <_SBFakeBlurObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)_createOrRemoveMatchMoveAnimationIfNeeded;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1;
- (void)_setImage:(id)arg1 style:(long long)arg2 notify:(_Bool)arg3;
- (void)_updateImageWithSource:(id)arg1 notifyObserver:(_Bool)arg2;
- (void)updateImageWithSource:(id)arg1;
- (void)reconfigureWithSource:(id)arg1;
@property(readonly, nonatomic) long long variant;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2 transformOptions:(unsigned long long)arg3;
@property(nonatomic) double zoomScale;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

