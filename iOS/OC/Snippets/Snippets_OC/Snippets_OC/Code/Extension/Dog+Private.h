//
//  Dog+Private.h
//
//  Created by yan feng liu on 9/2/18.
//

/*
 Scenario: When the obj is used inside Static Lib/Framework, but we do not wanna its properties be visible outside.
 */

#import "Dog.h"

@interface Dog ()

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, assign) double age;
@property (nonatomic, copy) NSString *owner;

@end

@interface Dog (Private)

@end
