//
//  FetchJSONViewController.h
//  JSONModeler
//
//  Created by Jon Rexeisen on 11/10/11.
//  Copyright (c) 2011 Nerdery Interactive Labs. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "JSONModeler.h"
#import "MasterControllerDelegate.h"

@interface FetchJSONViewController : NSViewController

@property (retain) JSONModeler *modeler;
@property (weak) IBOutlet NSTextField *urlTextField;
@property (weak) IBOutlet NSTextFieldCell *urlTextFieldCell;
@property (weak) IBOutlet NSButton *getDataButton;
@property (unsafe_unretained) IBOutlet NSTextView *JSONTextView;
@property (weak) IBOutlet NSProgressIndicator *progressView;
@property (weak) IBOutlet NSButton *chooseLanguageButton;
@property (assign) id<MasterControllerDelegate> delegate;


- (IBAction)getUrlPressed:(id)sender;
- (IBAction)chooseLanguagePressed:(id)sender;

@end