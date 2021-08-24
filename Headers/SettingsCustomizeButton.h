//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAudioPlayer, UIImageView;

@interface SettingsCustomizeButton : UIView
{
    struct CGPoint tap_origin;
    AVAudioPlayer *button_down;
    AVAudioPlayer *button_up;
    AVAudioPlayer *button_cancel;
    _Bool isButton;
    UIImageView *newicon;
    UIImageView *icon;
}

@property _Bool isButton; // @synthesize isButton;
@property(retain) UIImageView *icon; // @synthesize icon;
@property(retain) UIImageView *newicon; // @synthesize newicon;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addNew;
- (id)initWithImage:(id)arg1;

@end
