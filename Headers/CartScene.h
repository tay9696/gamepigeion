//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameScene.h"

@class ActionButton, CartCar, GoalNode, KnockPenguin, NSDate, NSMutableArray, NSMutableString, NSString, PoolSkipButton, SKAudioNode, SKLabelNode, SKNode, SKShapeNode, SKSpriteNode, ShufflePuck, TipNode, UITouch;

@interface CartScene : GameScene
{
    SKNode *grass;
    float last_a;
    UITouch *touch;
    int controls;
    struct b2Body *car_body;
    CartCar *car;
    SKSpriteNode *spr;
    SKSpriteNode *sp;
    SKNode *map;
    _Bool created;
    NSString *mode;
    NSMutableArray *particles;
    SKSpriteNode *board;
    SKSpriteNode *board2;
    SKNode *table;
    struct b2World *world;
    ShufflePuck *puck;
    SKNode *selected;
    struct CGPoint last_pos;
    struct CGPoint puck_pos;
    float speed;
    float board_size;
    float board_size_h;
    PoolSkipButton *skip_button;
    SKSpriteNode *arrow;
    int state;
    int player;
    NSString *player_id1;
    NSString *player_id2;
    int score1;
    int score2;
    _Bool shot;
    NSMutableString *replay_send;
    NSMutableString *pre_send;
    NSMutableArray *replay;
    SKLabelNode *score1_label;
    SKLabelNode *score2_label;
    NSMutableArray *nuke;
    ActionButton *actionButton;
    TipNode *tip;
    float left;
    float right;
    SKSpriteNode *marker1;
    SKSpriteNode *marker2;
    _Bool shown;
    GoalNode *goal;
    SKSpriteNode *bg_node;
    KnockPenguin *tip_penguin;
    SKAudioNode *drag_sound;
    int melt;
    int win;
    NSDate *last_hit;
    NSDate *fps;
    struct KnockContactListener *listener;
    SKNode *canvas;
    SKShapeNode *canvas0;
    SKShapeNode *canvas1;
    SKShapeNode *canvas2;
    SKSpriteNode *finish;
    SKSpriteNode *nitro_button;
    _Bool nitro;
    NSMutableArray *nitro_buttons;
    SKShapeNode *_spinnyNode;
    SKLabelNode *_label;
}

- (void).cxx_destruct;
- (void)resize;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (double)getAlphaFromImage:(id)arg1 atX:(long long)arg2 andY:(long long)arg3;
- (void)update:(double)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (void)createSceneContents;
- (void)didMoveToView:(id)arg1;
- (id)initWithMain:(id)arg1 msg:(id)arg2;

@end

