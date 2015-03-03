//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarPositioningDelegate.h"

@class NSString, UISearchBar;

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@optional
- (void)searchBar:(UISearchBar *)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
- (BOOL)searchBar:(UISearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarBookmarkButtonClicked:(UISearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)searchBarResultsListButtonClicked:(UISearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg1;
- (BOOL)searchBarShouldBeginEditing:(UISearchBar *)arg1;
- (BOOL)searchBarShouldEndEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg1;
@end

