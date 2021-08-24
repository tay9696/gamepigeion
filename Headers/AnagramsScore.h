//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSDictionary, NSString, SKLabelNode, SKSpriteNode;

@interface AnagramsScore : SKNode
{
    SKLabelNode *score_node;
    SKLabelNode *word_node;
    SKLabelNode *more;
    SKNode *word_list;
    SKNode *score_container;
    SKLabelNode *q;
    _Bool right;
    _Bool gray;
    _Bool _active;
    int words;
    int _score;
    NSString *words_string;
    SKSpriteNode *bg;
    SKSpriteNode *score_bg;
    NSDictionary *_dict_c;
    NSString *_game;
    SKLabelNode *_score_node;
    NSString *_words_string_compact;
}

@property(retain) NSString *words_string_compact; // @synthesize words_string_compact=_words_string_compact;
@property(retain) SKLabelNode *score_node; // @synthesize score_node=_score_node;
@property int score; // @synthesize score=_score;
@property _Bool active; // @synthesize active=_active;
@property(retain) NSString *game; // @synthesize game=_game;
@property(retain) NSDictionary *dict_c; // @synthesize dict_c=_dict_c;
@property(retain) SKSpriteNode *score_bg; // @synthesize score_bg;
@property _Bool gray; // @synthesize gray;
@property(retain) SKSpriteNode *bg; // @synthesize bg;
@property int words; // @synthesize words;
@property(retain) NSString *words_string; // @synthesize words_string;
- (void).cxx_destruct;
- (void)setScore:(int)arg1 words:(id)arg2 words_count:(int)arg3;
- (void)Gray;
- (void)setEnemy;
- (id)init;

@end
