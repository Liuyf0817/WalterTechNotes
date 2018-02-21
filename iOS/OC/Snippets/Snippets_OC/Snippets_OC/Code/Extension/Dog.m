//
//  Dog.m
//
//  Created by yan feng liu on 9/2/18.
//

#import "Dog.h"
#import "Dog+Private.h"

@implementation Dog

+ (id)allocWithZone:(struct _NSZone *)zone
{
    if (self != [Dog class]) {
        NSAssert(nil, @"Subclassing Dog not allowed.");
        return nil;
    }
    
    return [super allocWithZone:zone];
}

@end
