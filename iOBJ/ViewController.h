//
//  ViewController.h
//  iOBJ
//
//  Created by felipowsky on 02/01/12.
//
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "FileListViewController.h"

@interface ViewController : GLKViewController <FileListViewControllerDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, weak) IBOutlet UIView *gestureView;
@property (nonatomic, weak) IBOutlet UINavigationBar *navigatorBar;
@property (nonatomic, weak) IBOutlet UIToolbar *toolBar;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *textureDisplayButton;
@property (nonatomic, weak) IBOutlet UILabel *framesPerSecondLabel;
@property (nonatomic, weak) IBOutlet UILabel *verticesCountLabel;
@property (nonatomic, weak) IBOutlet UILabel *facesCountLabel;
@property (nonatomic, weak) IBOutlet UIView *statsView;
@property (nonatomic, weak) IBOutlet UIView *progressiveOptionsView;
@property (nonatomic, weak) IBOutlet UISlider *progressiveSlider;
@property (nonatomic, weak) IBOutlet UILabel *percentageProgressiveLOD;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *progressiveButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *viewDependentButton;
@property (nonatomic, weak) IBOutlet UIView *loadingView;
@property (nonatomic, weak) IBOutlet UILabel *loadingLabel;
@property (nonatomic, weak) IBOutlet UIView *lodTypesView;
@property (nonatomic, weak) IBOutlet UISwitch *cacheProgressiveSwitch;

- (IBAction)displayModeTouched:(id)sender;
- (IBAction)toggleStats:(id)sender;
- (IBAction)toggleLOD:(id)sender;
- (IBAction)toggleProgressive:(id)sender;
- (IBAction)toggleViewDependent:(id)sender;
- (IBAction)sliderValueChanging:(id)sender;
- (IBAction)sliderValueChanged:(id)sender;
- (IBAction)progressiveCacheValueChanged:(id)sender;

@end
