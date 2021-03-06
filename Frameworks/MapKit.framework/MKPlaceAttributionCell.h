/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSAttributedString, NSMutableArray, UILabel;

@interface MKPlaceAttributionCell : ABContactCell {
    UILabel *_label;
    NSMutableArray *_scaledConstraints;
}

@property(retain) NSAttributedString * attributionString;
@property(retain) UILabel * label;
@property(retain) NSMutableArray * scaledConstraints;

+ (id)fontForLabel;
+ (float)intrinsicContentHeight;

- (void).cxx_destruct;
- (id)attributionString;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (id)scaledConstraints;
- (void)setAttributionString:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setScaledConstraints:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)updatedAttributionStringFromString:(id)arg1 updateColorOnly:(BOOL)arg2;

@end
