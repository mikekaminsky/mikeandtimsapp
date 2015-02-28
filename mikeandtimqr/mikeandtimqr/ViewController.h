//
//  ViewController.h
//  mikeandtimqr
//
//  Created by nichols on 2/28/15.
//  Copyright (c) 2015 nichols. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>;

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *bbitemStart;


-(IBAction)startStopReading:(id)sender;


@end

