//
//  UITableViewCell+prepareForHeadline.h
//  HackerNews
//
//  Created by Cristian Monterroza on 10/24/14.
//  Copyright (c) 2014 wrkstrm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (HNHeadline)

- (void)prepareForHeadline:(NSDictionary *)properties iconData:(NSData *)iconData path:(NSIndexPath *)path;

+ (CGFloat) getCellHeightForDocument:(CBLDocument *)document view:(UIView *)tableView;

@end