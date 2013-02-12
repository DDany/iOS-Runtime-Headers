/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKRecipientGenerator : NSObject {
    void *_addressBook;
    NSArray *_generateABPropertyTypes;
    NSArray *_searchABPropertyTypes;
}

@property(retain) NSArray *generateABPropertyTypes;
@property(retain) NSArray *searchABPropertyTypes;

- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(NSInteger)arg3 toArray:(id)arg4;
- (void)dealloc;
- (id)generateABPropertyTypes;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)resultsForText:(id)arg1;
- (id)searchABPropertyTypes;
- (void)setGenerateABPropertyTypes:(id)arg1;
- (void)setSearchABPropertyTypes:(id)arg1;

@end