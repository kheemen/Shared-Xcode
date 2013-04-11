//
//  DetailViewController.h
//  Project2
//
//  Created by Shirly Cheng on 21/3/13.
//  Copyright (c) 2013 Hyersoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
