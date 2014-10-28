/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKContiguousContainerView, GKLabel, UIImageView;

@interface GKTurnGameCell : GKBaseGameCell {
    GKLabel *_activeMatchesLabel;
    GKLabel *_localPlayerTurnsLabel;
    unsigned int _numberOfActiveMatches;
    unsigned int _numberOfLocalPlayerTurns;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
}

@property(retain) GKLabel * activeMatchesLabel;
@property(retain) GKLabel * localPlayerTurnsLabel;
@property unsigned int numberOfActiveMatches;
@property unsigned int numberOfLocalPlayerTurns;
@property(retain) UIImageView * statusImageView;
@property(retain) GKContiguousContainerView * textContainerView;

+ (float)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)activeMatchesLabel;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)localPlayerTurnsLabel;
- (unsigned int)numberOfActiveMatches;
- (unsigned int)numberOfLocalPlayerTurns;
- (void)setActiveMatchesLabel:(id)arg1;
- (void)setLocalPlayerTurnsLabel:(id)arg1;
- (void)setNumberOfActiveMatches:(unsigned int)arg1;
- (void)setNumberOfLocalPlayerTurns:(unsigned int)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (id)statusImageView;
- (id)textContainerView;

@end