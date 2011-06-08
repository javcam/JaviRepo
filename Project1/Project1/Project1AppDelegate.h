//
//  Project1AppDelegate.h
//  Project1
//
//  Created by Javier on 6/8/11.
//  Copyright 2011 Globant. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Project1ViewController;

@interface Project1AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Project1ViewController *viewController;

@end
