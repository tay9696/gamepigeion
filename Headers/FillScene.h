//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameScene.h"

@class ActionButton, DotsLine, FillButton, NSDate, NSMutableArray, NSMutableString, NSString, ReversiPiece, ReversiTip, SKLabelNode, SKNode, SKSpriteNode, TipNode;

@interface FillScene : GameScene
{
    NSMutableArray *tempArray;
    int seed;
    SKNode *board;
    SKNode *table;
    _Bool force;
    ReversiPiece *force_piece;
    SKNode *selected;
    SKNode *selected2;
    struct CGPoint last_pos;
    struct CGPoint puck_pos;
    float speed;
    float board_size;
    float board_size_h;
    int state;
    int player;
    NSString *player_id1;
    NSString *player_id2;
    int score1;
    int score2;
    _Bool selected_moved;
    _Bool shot;
    SKNode *board2;
    NSDate *last_swoosh;
    NSMutableString *replay_send;
    NSMutableString *pre_send;
    NSMutableArray *replay;
    SKLabelNode *score1_label;
    SKLabelNode *score2_label;
    SKSpriteNode *score1_box;
    SKSpriteNode *score2_box;
    NSMutableArray *map;
    NSMutableArray *lines;
    NSMutableArray *squares;
    ActionButton *actionButton;
    TipNode *tip;
    DotsLine *line;
    float size;
    _Bool sent;
    float left;
    float right;
    int winner;
    int player2;
    ReversiPiece *piece1;
    ReversiPiece *piece2;
    FillButton *marker1;
    FillButton *marker2;
    float radius;
    SKSpriteNode *shade;
    SKSpriteNode *board3;
    NSMutableArray *win_stones;
    ReversiTip *me_tip;
    ReversiTip *opponent_tip;
    NSString *mode;
    SKNode *menu;
    int order;
}

- (void).cxx_destruct;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)resize;
- (void)savePlaceBack:(id)arg1 what:(id)arg2;
- (void)placeBack:(id)arg1;
- (id)generatePreview;
- (id)getPreview;
- (void)sendMessage;
- (id)exportBoard:(_Bool)arg1;
- (id)exportBoard;
- (void)setBoard:(id)arg1;
- (void)playReplay;
- (void)skip;
- (id)parseReplay:(id)arg1;
- (void)new_round;
- (void)iterateCheck:(int)arg1 x:(int)arg2 c:(int)arg3;
- (void)swoosh;
- (void)swoosh2;
- (void)receiveMessage:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fill:(id)arg1 num:(int)arg2;
- (void)finalWin;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (void)showScore;
- (void)update:(double)arg1;
- (struct CGPoint)Slerp:(struct CGPoint)arg1 pos2:(struct CGPoint)arg2 ratio:(float)arg3;
- (void)createSceneContents;
- (void)didMoveToView:(id)arg1;
- (id)initWithMain:(id)arg1 msg:(id)arg2;

@end

