//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSArray, NSString, SKLabelNode, SKSpriteNode;

@interface WaitDisplayNode : SKNode
{
    SKSpriteNode *stripe1;
    SKSpriteNode *stripe2;
    SKSpriteNode *stripe3;
    SKSpriteNode *border;
    SKSpriteNode *border_node;
    SKLabelNode *label;
    SKNode *sent_node;
    SKLabelNode *sent_label;
    SKSpriteNode *sent_checkmark;
    SKNode *stripes;
    NSString *dots;
    NSString *string;
    NSArray *textures;
    SKNode *finished_node;
    _Bool _finished;
}

@property _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)showWait:(float)arg1 instant:(_Bool)arg2;
- (void)showWin:(int)arg1 text:(id)arg2 delay:(float)arg3 instant:(_Bool)arg4;
- (void)finishedFunc;
- (void)showSent:(float)arg1;
- (void)update;
- (void)hideWait;
- (id)easeOut:(id)arg1;
- (id)easeIn:(id)arg1;
- (void)showSent;
- (void)showWait;
- (void)stopBlinking;
- (void)dot;
- (void)startBlinking;
- (void)startBlinking2;
- (id)init;

@end
