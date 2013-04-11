//
//  BirdSighting.h
//  Project2
//
//  Created by Shirly Cheng on 24/3/13.
//  Copyright (c) 2013 Hyersoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;
-(id)initWithName:(NSString *)name
location:(NSString *)location
date:(NSDate *)date;

@end
