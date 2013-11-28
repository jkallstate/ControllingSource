//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Jung Kim on 11/28/13.
//  Copyright (c) 2013 Jay Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
