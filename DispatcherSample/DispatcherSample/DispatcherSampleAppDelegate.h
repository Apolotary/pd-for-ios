//
//  DispatcherSampleAppDelegate.h
//  DispatcherSample
//
//  Copyright (c) 2011 Peter Brinkmann (peter.brinkmann@gmail.com)
//
//  For information on usage and redistribution, and for a DISCLAIMER OF ALL
//  WARRANTIES, see the file, "LICENSE.txt," in this distribution.
//

#import <UIKit/UIKit.h>
#import "PdAudio.h"

@class DispatcherSampleViewController;

@interface DispatcherSampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DispatcherSampleViewController *viewController;
	PdAudio *pdAudio;
    void *patch;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DispatcherSampleViewController *viewController;

@end


