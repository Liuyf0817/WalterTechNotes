//
//  AppDelegate.h
//  Snippets_OC
//
//  Created by yan feng liu on 21/2/18.
//  Copyright © 2018 walter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

