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
@property (weak, nonatomic) IBOutlet UILabel *albumTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;
@property (weak, nonatomic) IBOutlet UILabel *artistLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;

@property (strong, nonatomic) Album * detailItem;

@end

