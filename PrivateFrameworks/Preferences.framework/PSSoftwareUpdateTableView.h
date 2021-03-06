/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UIActivityIndicatorView, UILabel;

@interface PSSoftwareUpdateTableView : UITableView {
    UIActivityIndicatorView *_checkingForUpdateSpinner;
    UILabel *_checkingStatusLabel;
    NSString *_currentVersion;
    int _state;
    UILabel *_subtitleLabel;
}

@property(retain) UIActivityIndicatorView * checkingForUpdateSpinner;
@property(retain) UILabel * checkingStatusLabel;
@property(retain) NSString * currentVersion;
@property int state;
@property(retain) UILabel * subtitleLabel;

- (id)checkingForUpdateSpinner;
- (id)checkingStatusLabel;
- (id)currentVersion;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)layoutSubviews;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setCheckingStatusLabel:(id)arg1;
- (void)setCurrentVersion:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (int)state;
- (id)subtitleLabel;

@end
