//
//  I3MoveableCollectionViewCell.h
//  BetweenKit
//
//  Created by Stephen Fortune on 20/12/2014.
//  Copyright (c) 2014 stephen fortune. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const I3MoveableCollectionViewCellIdentifier;

@interface I3MoveableCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) IBOutlet UIView *moveAccessory;

@end
