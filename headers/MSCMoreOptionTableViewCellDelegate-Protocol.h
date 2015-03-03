//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, UIColor, UITableView;

@protocol MSCMoreOptionTableViewCellDelegate <NSObject>
- (void)tableView:(UITableView *)arg1 moreOptionButtonPressedInRowAtIndexPath:(NSIndexPath *)arg2;

@optional
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForMoreOptionButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 titleColorForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 titleColorForMoreOptionButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForMoreOptionButtonForRowAtIndexPath:(NSIndexPath *)arg2;
@end

