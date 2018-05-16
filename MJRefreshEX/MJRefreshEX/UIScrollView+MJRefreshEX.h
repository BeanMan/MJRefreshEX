//
//  UIScrollView+MJRefreshEX.h
//  MJRefreshEX
//
//  Created by Destiny on 2018/5/16.
//  Copyright © 2018年 Destiny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (MJRefreshEX)

/**
 下拉刷新

 @param beginRefresh 是否自动刷新
 @param animation 是否需要动画
 @param refreshBlock 刷新回调
 */
- (void)addHeaderWithHeaderWithBeginRefresh:(BOOL)beginRefresh animation:(BOOL)animation refreshBlock:(void(^)(NSInteger pageIndex))refreshBlock;


/**
 下拉刷新成功更新

 @param change 是否成功
 */
- (void)endHeaderRefreshWithChangePageIndex:(BOOL)change;


/**
 上啦加载

 @param automaticallyRefresh 是否自动加载
 @param loadMoreBlock 加载回调
 */
- (void)addFooterWithWithHeaderWithAutomaticallyRefresh:(BOOL)automaticallyRefresh loadMoreBlock:(void(^)(NSInteger pageIndex))loadMoreBlock;


/**
 上啦加载成功更新

 @param change 是否成功
 */
- (void)endFooterRefreshWithChangePageIndex:(BOOL)change;


@end
