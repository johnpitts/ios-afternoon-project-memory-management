//
//  ContactController.h
//  ContactsObjC2Wed
//
//  Created by John Pitts on 7/24/19.
//  Copyright © 2019 johnpitts. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface ContactController : NSObject

@property (retain) NSArray *contacts;

- (void)createContact:(NSString *)name
              email:(NSString *)email
             phone:(NSString *)phone;

//- (void)deleteContact:(...

//- (void)updateContact:(...



@end


