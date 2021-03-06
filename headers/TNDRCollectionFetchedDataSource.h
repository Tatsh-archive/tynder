//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSFetchedResultsController, NSMutableArray, NSString, UICollectionView;

@interface TNDRCollectionFetchedDataSource : NSObject <UICollectionViewDataSource, NSFetchedResultsControllerDelegate>
{
    BOOL _paused;
    NSFetchedResultsController *_fetchedResultsController;
    id <TNDRDataSourceDelegate> _delegate;
    NSString *_reuseIdentifier;
    UICollectionView *_collectionView;
    NSMutableArray *_objectChanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
@property(nonatomic) __weak id <TNDRDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
- (id)initWithCollectionView:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *objectChanges; // @synthesize objectChanges=_objectChanges;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (id)selectedItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

