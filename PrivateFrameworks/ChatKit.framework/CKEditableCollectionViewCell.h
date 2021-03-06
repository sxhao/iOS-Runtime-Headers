/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIImageView *_checkmark;
    } _contentAlignmentRect;
    } _contentInsets;
    BOOL _editing;
    } _marginInsets;
}

@property(retain) UIImageView * checkmark;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentAlignmentInsets;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentAlignmentRect;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(getter=isEditing) BOOL editing;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } marginInsets;

- (id)checkmark;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentAlignmentInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentAlignmentRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)dealloc;
- (id)description;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })marginInsets;
- (void)setCheckmark:(id)arg1;
- (void)setContentAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateCheckmarkImage;

@end
