//
//  eventObject.h
//  StopWatch
//
//  Created by Natalia Estrella on 8/29/15.
//  Copyright (c) 2015 MacManApp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Event : NSObject
@property (nonatomic) NSString *name;
@property (nonatomic) NSDate *endTime;
@property (nonatomic) NSString *pictureName; 

@end
