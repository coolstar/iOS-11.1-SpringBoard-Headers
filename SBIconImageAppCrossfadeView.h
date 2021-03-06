//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconImageCrossfadeView.h"

@class UIView;

@interface SBIconImageAppCrossfadeView : SBIconImageCrossfadeView
{
    UIView *_imageViewParentView;
    UIView *_crossfadeViewParentView;
}

- (void).cxx_destruct;
- (void)setCornerRadiusEnabled:(_Bool)arg1;
- (void)cleanup;
- (void)setCrossfadeFraction:(double)arg1;
@property(readonly, nonatomic) UIView *crossfadeViewParentView;
@property(readonly, nonatomic) UIView *imageViewParentView;
- (void)layoutSubviews;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end

