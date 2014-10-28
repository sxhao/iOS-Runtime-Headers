/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString;

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement {
    int _entryListElementType;
    BOOL _indexBarHiddenWhenEmpty;
    int _minimumEntityCount;
    NSString *_targetIndexBarEntryID;
}

@property(copy,readonly) NSArray * childIndexBarEntryElements;
@property(readonly) int entryListElementType;
@property(getter=isIndexBarHiddenWhenEmpty,readonly) BOOL indexBarHiddenWhenEmpty;
@property(readonly) int minimumEntityCount;
@property(copy,readonly) NSString * targetIndexBarEntryID;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)childIndexBarEntryElements;
- (int)entryListElementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isIndexBarHiddenWhenEmpty;
- (int)minimumEntityCount;
- (id)targetIndexBarEntryID;

@end