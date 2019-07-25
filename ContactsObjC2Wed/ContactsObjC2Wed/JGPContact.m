//
//  JGPContact.m
//  ContactsObjC2Wed
//
//  Created by John Pitts on 7/24/19.
//  Copyright © 2019 johnpitts. All rights reserved.
//

#import "JGPContact.h"

@implementation JGPContact

- (instancetype)initWithName:(NSString *)name
                       email:(NSString *)email
                       phone:(NSString *)phone {
    self = [super init];
    if (self != nil) {      // i still don't understand why self would ever be equal to nil?  I guess it might happen if you didn't alloc init the Contact?
        
        _name = name;
        _email = email;
        _phone = phone;
        
    }
    return self;
}

@end
