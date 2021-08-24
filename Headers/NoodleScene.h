//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameScene.h"

@class ActionButton, AnagramsScore, HuntWord, NSDate, NSMutableArray, NSMutableDictionary, NSString, SKAudioNode, SKLabelNode, SKMultilineLabel, SKNode, SKShapeNode, SKSpriteNode, ShuffleButton, TipNode;

@interface NoodleScene : GameScene
{
    HuntWord *wordie;
    SKShapeNode *canvas;
    SKAudioNode *counting;
    SKAudioNode *ticker;
    SKNode *board;
    ActionButton *enter;
    NSMutableArray *blocks;
    NSMutableArray *answer;
    NSMutableArray *chain;
    SKNode *selected;
    int words;
    int score;
    SKSpriteNode *paper;
    SKLabelNode *score_node;
    SKLabelNode *word_node;
    SKSpriteNode *timer_node;
    SKLabelNode *timer_label;
    SKSpriteNode *timer_arrow;
    SKSpriteNode *timer_arrow2;
    TipNode *tip;
    NSDate *start_time;
    NSMutableArray *words_ar;
    NSMutableDictionary *dict;
    int state;
    SKNode *how;
    SKMultilineLabel *how_label;
    SKMultilineLabel *how_timer;
    ActionButton *start;
    SKSpriteNode *start_timer;
    ActionButton *send;
    AnagramsScore *result;
    AnagramsScore *result2;
    _Bool sent;
    int player;
    _Bool mine;
    NSString *letters;
    NSString *player_id1;
    NSString *player_id2;
    ShuffleButton *shuffle;
    SKNode *glows;
    NSMutableArray *marks;
    NSString *lang;
    SKLabelNode *sc;
    SKSpriteNode *sc2;
    int size;
    NSString *mode;
    _Bool created;
}

- (void).cxx_destruct;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)resize;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (void)update:(double)arg1;
- (void)unload;
- (struct CGPoint)Slerp:(struct CGPoint)arg1 pos2:(struct CGPoint)arg2 ratio:(float)arg3;
- (void)enterWord;
- (void)toResult;
- (void)winGame;
- (void)saveScore;
- (void)startGame;
- (void)sendMessage;
- (id)generateWord:(id)arg1;
- (void)savePlaceBack:(id)arg1 what:(id)arg2;
- (void)placeBack:(id)arg1;
- (id)generatePreview;
- (void)Shuffle;
- (void)receiveMessage:(id)arg1;
- (void)small;
- (void)big;
- (void)createSceneContents;
- (void)didMoveToView:(id)arg1;
- (id)initWithMain:(id)arg1 msg:(id)arg2;

@end
