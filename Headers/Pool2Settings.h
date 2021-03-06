//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameSettings.h"

@class NSMutableArray, NSString, SettingsCustomizeButton, SettingsOptionButton, SettingsOptionPartition;

@interface Pool2Settings : GameSettings
{
    NSMutableArray *locks;
    SettingsOptionPartition *part2;
    SettingsOptionPartition *part1;
    SettingsOptionPartition *part3;
    SettingsOptionButton *option1;
    SettingsOptionButton *option2;
    SettingsOptionButton *option3;
    SettingsOptionButton *option4;
    SettingsCustomizeButton *customize;
    NSString *mode;
    NSString *game;
}

@property(retain) NSString *game; // @synthesize game;
@property(retain) NSString *mode; // @synthesize mode;
- (void).cxx_destruct;
- (void)selectGame:(id)arg1;
- (void)changeGame:(id)arg1;
- (void)selectDifficulty:(id)arg1;
- (void)changeDifficulty:(id)arg1;
- (void)update;
- (void)resize;
- (id)init;
- (void)Customize:(id)arg1;

@end

