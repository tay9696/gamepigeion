//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer;

@interface GameAudioPlayer : NSObject
{
    _Bool _playing;
    float _volume;
    AVAudioPlayer *_player;
}

@property(retain) AVAudioPlayer *player; // @synthesize player=_player;
@property _Bool playing; // @synthesize playing=_playing;
@property float volume; // @synthesize volume=_volume;
- (void).cxx_destruct;

@end

