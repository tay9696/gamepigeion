//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSString, SKCropNode, SKLabelNode, SKSpriteNode, UIColor, YouNode;

@interface AvatarNode : SKNode
{
    SKSpriteNode *bg;
    SKSpriteNode *shadow;
    SKCropNode *mask;
    SKCropNode *bg_mask;
    SKNode *character;
    SKNode *character_top;
    SKNode *character_character;
    SKSpriteNode *hair;
    SKSpriteNode *bhair;
    SKSpriteNode *chest;
    SKSpriteNode *clothes;
    SKSpriteNode *fclothes;
    SKSpriteNode *bclothes;
    SKSpriteNode *mouth;
    SKSpriteNode *body;
    SKSpriteNode *hat;
    SKSpriteNode *glasses;
    SKSpriteNode *stache;
    SKSpriteNode *backdrop;
    int time;
    int state;
    int wins;
    SKSpriteNode *glow;
    SKSpriteNode *shine;
    SKSpriteNode *arrow_sprite;
    SKLabelNode *q;
    SKSpriteNode *medal;
    SKLabelNode *medal_label;
    _Bool v2;
    int win;
    int eyes_type;
    int accessory_type;
    int mouth_type;
    int body_type;
    int stache_type;
    int glasses_type;
    int medal_num;
    int backdrop_type;
    int clothes_type;
    int hair_type;
    SKSpriteNode *eyes;
    YouNode *you;
    SKNode *arrow;
    UIColor *bg_color;
    UIColor *body_color;
    NSString *name;
    UIColor *hair_color;
    UIColor *clothes_color;
    SKSpriteNode *lock;
    struct CGPoint eyes_position;
    struct CGPoint eyes_origin;
}

@property(retain) SKSpriteNode *lock; // @synthesize lock;
@property int hair_type; // @synthesize hair_type;
@property int clothes_type; // @synthesize clothes_type;
@property(retain) UIColor *clothes_color; // @synthesize clothes_color;
@property(retain) UIColor *hair_color; // @synthesize hair_color;
@property _Bool v2; // @synthesize v2;
@property(retain) NSString *name; // @synthesize name;
@property int backdrop_type; // @synthesize backdrop_type;
@property int medal_num; // @synthesize medal_num;
@property int glasses_type; // @synthesize glasses_type;
@property int stache_type; // @synthesize stache_type;
@property int body_type; // @synthesize body_type;
@property int mouth_type; // @synthesize mouth_type;
@property int accessory_type; // @synthesize accessory_type;
@property int eyes_type; // @synthesize eyes_type;
@property(retain) UIColor *body_color; // @synthesize body_color;
@property(retain) UIColor *bg_color; // @synthesize bg_color;
@property(retain) SKNode *arrow; // @synthesize arrow;
@property struct CGPoint eyes_origin; // @synthesize eyes_origin;
@property struct CGPoint eyes_position; // @synthesize eyes_position;
@property int win; // @synthesize win;
@property(retain) YouNode *you; // @synthesize you;
@property(retain) SKSpriteNode *eyes; // @synthesize eyes;
- (void).cxx_destruct;
- (void)update;
- (void)parseString2:(id)arg1;
- (int)charToInt:(id)arg1;
- (float)charToFloat:(id)arg1;
- (id)intToChar:(int)arg1;
- (id)floatToChar:(float)arg1;
- (void)updateMedals;
- (id)toString2;
- (id)toString;
- (float)brightness:(id)arg1;
- (void)setAvatarWithBody:(int)arg1 eyes:(int)arg2 mouth:(int)arg3 accessory:(int)arg4 wins:(int)arg5 body_color:(id)arg6 bg_color:(id)arg7 glasses:(int)arg8 stache:(int)arg9 backdrop:(int)arg10 clothes:(int)arg11 hair:(int)arg12 hair_color:(id)arg13 clothes_color:(id)arg14;
- (void)setAvatarWithBody:(int)arg1 eyes:(int)arg2 mouth:(int)arg3 accessory:(int)arg4 wins:(int)arg5 body_color:(id)arg6 bg_color:(id)arg7 glasses:(int)arg8 stache:(int)arg9 backdrop:(int)arg10;
- (void)setAvatarWithBody:(int)arg1 eyes:(int)arg2 mouth:(int)arg3 accessory:(int)arg4 wins:(int)arg5 body_color:(id)arg6 bg_color:(id)arg7;
- (void)brightArrow;
- (void)parseString:(id)arg1;
- (void)lookAt:(struct CGPoint)arg1;
- (void)lookAt;
- (void)setYouLeft;
- (void)setYouRight;
- (void)setYouDown;
- (void)setYouUp;
- (void)setArrowPosition:(int)arg1;
- (void)randomPromo:(id)arg1;
- (void)setAvatar;
- (void)random:(id)arg1;
- (void)setUnknown;
- (void)addLock;
- (id)initWithType2:(int)arg1;
- (id)initWithType:(int)arg1;
- (void)showHat;
- (void)setType:(int)arg1;
- (id)init2;
- (id)init;

@end

