/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSMutableDictionary, WDDocument, WDList;

@interface WDListTable : NSObject {
    WDDocument *mDocument;
    NSMutableDictionary *mListMapById;
    NSMutableArray *mLists;
    WDList *mNullList;
}

- (id)addListWithListId:(long)arg1 listDefinitionId:(long)arg2;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)listAt:(unsigned int)arg1;
- (unsigned int)listCount;
- (id)listWithListId:(long)arg1;
- (id)lists;

@end
