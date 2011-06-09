//
//  Light_ViewController.h
//  Light²
//
//  Created by Lars Anderson on 6/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Light_ViewController : UIViewController {
    IBOutlet UIImageView *_imageView;
    IBOutlet UIImageView *_transitionView;
    
@private
    NSMutableArray *_imagesArray;
}

@property (nonatomic,assign) UIImageView *imageView;
@property (nonatomic,assign) UIImageView *transitionView;

//privates
@property (nonatomic,retain) NSMutableArray *imagesArray;

- (void)randomizeBackgroundAnimated:(BOOL)animated;

@end
