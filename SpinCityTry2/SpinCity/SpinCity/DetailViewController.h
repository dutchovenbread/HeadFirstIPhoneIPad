//
//  DetailViewController.h
//  SpinCity
//
//  Created by Michael Hunter on 2/1/15.
//  Copyright (c) 2015 Michael Hunter. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Album;

@interface DetailViewController : UITableViewController //UIViewController

@property (strong, nonatomic) Album * detailItem;

@end

