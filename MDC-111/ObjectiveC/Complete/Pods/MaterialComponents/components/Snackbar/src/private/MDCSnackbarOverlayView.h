/*
 Copyright 2016-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <UIKit/UIKit.h>

@class MDCSnackbarMessageView;

/** The identifier reported for the snackbar. */
OBJC_EXTERN NSString *const MDCSnackbarOverlayIdentifier;

/** The time it takes to show or hide the snackbar. */
OBJC_EXTERN NSTimeInterval const MDCSnackbarLegacyTransitionDuration;

/**
 Custom overlay view for displaying snackbars.
 */
@interface MDCSnackbarOverlayView : UIView

/**
 Designated initializer.

 Creates an overlay view which uses @c watcher to get its keyboard position information.
 */
- (instancetype)initWithFrame:(CGRect)frame;

/**
 Shows the snackbar view with the most appropriate animation.

 @param snackbarView The snackbar view to display.
 @param animated Whether or not the show should be animated.
 @param completion A block to execute when the presentation is finished.
 */
- (void)showSnackbarView:(MDCSnackbarMessageView *)snackbarView
                animated:(BOOL)animated
              completion:(void (^)(void))completion;

/**
 Dismisses the currently showing snackbar view.

 @param animated Whether or not the dismiss should be animated.
 @param completion A block to execute when the dismissal is finished.
 */
- (void)dismissSnackbarViewAnimated:(BOOL)animated completion:(void (^)(void))completion;

/**
 How far from the bottom of the screen should snackbars be presented.

 If set inside of an animation block, the change will animate.
 */
@property(nonatomic) CGFloat bottomOffset;

@end
