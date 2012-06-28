//
//  TextBoxLayerSampleAppDelegate.h
//  TextBoxLayerSample
//
//  Created by Fabio Rodella on 1/19/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"

@interface TextBoxLayerSampleAppDelegate : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
	UIWindow *window_;
	UINavigationController *navController_;
    
	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) UINavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@end
