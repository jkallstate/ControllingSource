//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Jung Kim on 11/28/13.
//  Copyright (c) 2013 Jay Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
