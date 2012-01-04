//
//  GamePickerViewController.h
//  Ratings
//
//  Created by Jianjun Yu on 1/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GamePickerViewController;

@protocol GamePickerViewControllerDelegate <NSObject>

-(void)gamePickerViewController:(GamePickerViewController *)controller didSelectGame:(NSString *)theGame;

@end

@interface GamePickerViewController : UITableViewController {
    NSArray *games;
    
    NSUInteger selectedIndex;
}

@property (nonatomic, weak) id<GamePickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *game;

@end
