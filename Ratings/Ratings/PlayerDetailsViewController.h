//
//  PlayerDetailsViewController.h
//  Ratings
//
//  Created by Jianjun Yu on 12/31/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PlayerDetailsViewController;
@class Player;

@protocol PlayerDetailsViewControllerDelegate <NSObject>

-(void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;

-(void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Player *)player;

@end

@interface PlayerDetailsViewController : UITableViewController

@property (nonatomic, weak) id<PlayerDetailsViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

-(IBAction)cancel:(id)sender;
-(IBAction)done:(id)sender;

@end
