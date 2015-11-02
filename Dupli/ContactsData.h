//
//  ContactsData.h
//  Dupli
//
//  Created by Anthony Olukitibi on 4/27/14.
//  Copyright (c) 2014 Anthony Olukitibi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContactsData : NSObject

@property (nonatomic, strong) NSString *firstNames;
@property (nonatomic, strong) NSString *lastNames;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSArray *numbers;
@property (nonatomic, strong) NSArray *emails;

@end
