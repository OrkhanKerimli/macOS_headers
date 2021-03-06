//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AVCaptureControllerDelegate.h"
#import "NSTouchBarProvider.h"

@class AVCameraDisabledView, AVCaptureController, AVCaptureControlsViewController, AVCaptureDevice, AVCaptureFileOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, AVControlsContainerViewController, AVLoadingIndicatorView, NSArray, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, NSTouchBar, NSTrackingArea;

@interface AVCaptureView : NSView <AVCaptureControllerDelegate, NSTouchBarProvider>
{
    NSObject<OS_dispatch_semaphore> *_propertySemaphore;
    id <AVCaptureViewDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSString *_videoGravity;
    AVCameraDisabledView *_cameraDisabledView;
    AVLoadingIndicatorView *_loadingIndicatorView;
    AVControlsContainerViewController *_controlsContainerViewController;
    AVCaptureControlsViewController *_initialControlsViewController;
    AVCaptureControlsViewController *_captureControlsViewController;
    long long _showControlsCount;
    BOOL _isShowingControlsForMouseMovingInsideView;
    NSTimer *_controlsTimer;
    NSTimer *_temporaryControlsTimer;
    NSTrackingArea *_trackingArea;
    BOOL _viewHasBeenSetup;
    BOOL _showsControlsPane;
    BOOL _hideControlsOnMouseUp;
    BOOL _doNotMakeCurrentControlsViewControllerViewFirstResponder;
    BOOL _viewNeedsResetupInViewDidMoveToWindow;
    BOOL _usesDefaultSession;
    NSArray *_noHideAreaViews;
    CDStruct_83cd8af5 _floatingCaptureControlsMargin;
    long long _controlsStyle;
    AVCaptureController *_captureController;
}

+ (id)keyPathsForValuesAffectingFileOutput;
+ (BOOL)automaticallyNotifiesObserversOfFileOutput;
+ (id)keyPathsForValuesAffectingSession;
+ (BOOL)automaticallyNotifiesObserversOfSession;
+ (id)keyPathsForValuesAffectingTouchBar;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingAudioDevice;
+ (id)keyPathsForValuesAffectingVideoDevice;
+ (id)keyPathsForValuesAffectingSelectedCompressionOptionsIdentifier;
+ (id)keyPathsForValuesAffectingPrefersUnobscuredContent;
- (void).cxx_destruct;
@property(retain) AVCaptureController *captureController; // @synthesize captureController=_captureController;
@property long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void)captureController:(id)arg1 startRecordingToFileOutput:(id)arg2;
- (void)_showOrHideControls;
@property(readonly) AVCaptureFileOutput *fileOutput;
@property(readonly) AVCaptureSession *session;
- (void)setSession:(id)arg1 showVideoPreview:(BOOL)arg2 showAudioPreview:(BOOL)arg3;
@property __weak id <AVCaptureViewDelegate> delegate;
@property(copy) NSString *videoGravity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)_fireControlsTimer:(id)arg1;
- (void)_fireTemporaryControlsTimer:(id)arg1;
- (void)_showControlsTemporarily;
- (void)_hideControlsIfPossibleAfterDelay;
- (void)_hideControlsIfPossible;
- (void)_showControlsIfNeeded;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1;
- (id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
- (void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1;
- (id)_currentControlsViewController;
- (void)_updateVideoPreviewLayerIfNeeded;
- (void)_setupTrackingAreas;
- (BOOL)_mouseInNoHideArea;
- (id)_noHideAreaViews;
- (void)_setupCameraDisabledView;
- (void)_setupLoadingIndicatorView;
- (void)_setupControlsContainerView;
@property(retain) AVCaptureControlsViewController *captureControlsViewController;
@property(readonly) NSTouchBar *touchBar;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)hideControlsForAuxiliaryControl;
- (void)showControlsForAuxiliaryControl;
@property(getter=isFinishingRecording) BOOL finishingRecording;
@property(readonly) AVCaptureDevice *audioDevice;
@property(readonly) AVCaptureDevice *videoDevice;
@property(copy) NSString *selectedCompressionOptionsIdentifier;
- (void)setCompressionOptions:(id)arg1;
@property CDStruct_83cd8af5 floatingCaptureControlsMargin;
@property(copy) NSArray *noHideAreaViews;
@property(readonly) BOOL prefersUnobscuredContent;
@property(readonly) BOOL showsControlsPane;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

