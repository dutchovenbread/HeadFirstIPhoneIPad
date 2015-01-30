//
//  DetailViewController.h
//  SpinCity
//
//  Created by Michael Hunter on 1/29/15.
//  Copyright (c) 2015 Michael Hunter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

