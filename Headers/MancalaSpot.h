//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSMutableArray, SKLabelNode;

@interface MancalaSpot : SKNode
{
    int num;
    int player;
    NSMutableArray *drop;
    NSMutableArray *pieces;
    SKLabelNode *number;
    SKLabelNode *number2;
}

@property(retain) SKLabelNode *number2; // @synthesize number2;
@property(retain) SKLabelNode *number; // @synthesize number;
@property int player; // @synthesize player;
@property int num; // @synthesize num;
@property(retain) NSMutableArray *pieces; // @synthesize pieces;
@property(retain) NSMutableArray *drop; // @synthesize drop;
- (void).cxx_destruct;
- (void)big_drop:(int)arg1;
- (id)initWithRand:(int)arg1;

@end

