//
//  AddList.h
//  Shopping List App
//
//  Created by Mia Atkinson on 3/6/13.
//  Copyright (c) 2013 499. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddList : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;
- (IBAction)dismissView:(id)sender;
@end
