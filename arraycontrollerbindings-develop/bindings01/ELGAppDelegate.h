//
//  ELGAppDelegate.h
//  bindings01
//
//  Created by Eric Gorr on 2/14/13.
//  Copyright (c) 2013 Eric Gorr. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ELGAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow*			window;
@property (assign) IBOutlet NSArrayController*	controller;
@property (unsafe_unretained) IBOutlet NSArrayController *testArray;

@property (nonatomic, strong) NSString *currentlySelectedPort;

@end
