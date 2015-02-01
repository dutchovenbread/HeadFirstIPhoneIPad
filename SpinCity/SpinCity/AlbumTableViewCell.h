//
//  AlbumTableViewCell.h
//  SpinCity
//
//  Created by Michael Hunter on 2/1/15.
//  Copyright (c) 2015 Michael Hunter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlbumTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *albumTitleLabel;

@property (weak, nonatomic) IBOutlet UILabel *albumSummaryLabel;

@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@end
