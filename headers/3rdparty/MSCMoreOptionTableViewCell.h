//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIScrollView;

@interface MSCMoreOptionTableViewCell : UITableViewCell
{
    id <MSCMoreOptionTableViewCellDelegate> _delegate;
    UIButton *_moreOptionButton;
    UIScrollView *_cellScrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *cellScrollView; // @synthesize cellScrollView=_cellScrollView;
- (void)dealloc;
@property(nonatomic) __weak id <MSCMoreOptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)deleteButtonFromDeleteConfirmationView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIButton *moreOptionButton; // @synthesize moreOptionButton=_moreOptionButton;
- (void)moreOptionButtonPressed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setMoreOptionButtonTitle:(id)arg1 inDeleteConfirmationView:(id)arg2;
- (void)setupMoreOption;
- (id)tableView;

@end

