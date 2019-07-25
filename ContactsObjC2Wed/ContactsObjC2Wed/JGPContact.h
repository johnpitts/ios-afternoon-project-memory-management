//
//  JGPContact.h
//  ContactsObjC2Wed
//
//  Created by John Pitts on 7/24/19.
//  Copyright © 2019 johnpitts. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface JGPContact : NSObject

@property (retain) NSString *name;
@property (retain) NSString *email;
@property (retain) NSString *phone;

- (instancetype)initWithName:(NSString *)name
                       email:(NSString *)email
                       phone:(NSString *)phone;

@end


