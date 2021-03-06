/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIItemState, SSLookupItemOffer, UIButton, UIControl, UIImage, UIImageView, UILabel, UIView;

@interface SKUIBannerView : UIView {
    UILabel *_artistNameLabel;
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    SSLookupItemOffer *_itemOffer;
    UIButton *_itemOfferButton;
    SKUIItemState *_itemState;
    UILabel *_itemStateLabel;
    NSMutableArray *_screenshotImageViews;
    UIView *_separatorView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingStarImageView;
}

@property(copy) NSString * artistName;
@property(retain) SKUIClientContext * clientContext;
@property(readonly) UIControl * closeButton;
@property(retain) UIImage * iconImage;
@property(retain) SSLookupItemOffer * itemOffer;
@property(readonly) UIControl * itemOfferButton;
@property(retain) SKUIItemState * itemState;
@property(copy) NSArray * screenshotImages;
@property(copy) NSString * title;
@property float userRating;

- (void).cxx_destruct;
- (id)_newDefaultLabel;
- (void)_reloadItemState;
- (id)artistName;
- (id)clientContext;
- (id)closeButton;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemOffer;
- (id)itemOfferButton;
- (id)itemState;
- (void)layoutSubviews;
- (id)screenshotImages;
- (void)setArtistName:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setScreenshotImages:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;
- (float)userRating;

@end
