//
//  Player.h
//  SnakesAndLadders
//
//  Created by Victor Hong on 05/11/2016.
//  Copyright © 2016 Victor Hong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property NSInteger currentSquare;
@property NSDictionary *gameLogic;
@property NSString *output;
@property BOOL gameOver;
@property NSString *name;

-(void)rollDice;

@end
