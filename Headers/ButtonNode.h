//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class Sprite;

@interface ButtonNode : SKNode
{
    Sprite *sprite;
    SEL action;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property SEL action; // @synthesize action;
- (void).cxx_destruct;
- (void)up;
- (void)down;
- (void)setImage:(id)arg1;
- (id)init;

@end

