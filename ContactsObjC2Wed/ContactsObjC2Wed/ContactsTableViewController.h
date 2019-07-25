//
//  ContactsTableViewController.h
//  ContactsObjC2Wed
//
//  Created by John Pitts on 7/24/19.
//  Copyright © 2019 johnpitts. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ContactController;

NS_ASSUME_NONNULL_BEGIN

@interface ContactsTableViewController : UITableViewController

@property (retain) ContactController *contactController;

@end

NS_ASSUME_NONNULL_END
