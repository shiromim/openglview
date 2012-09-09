//
//  OpenGLViewAppDelegate.h
//  OpenGLView
//
//  Created by Hiromi Sawada on 9/9/12.
//  Copyright (c) 2012 shiromim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface OpenGLViewAppDelegate : UIResponder <UIApplicationDelegate> {
    OpenGLView *_glView;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenGLView *glView;

@end
