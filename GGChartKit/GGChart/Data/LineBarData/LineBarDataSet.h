//
//  LineBarDataSet.h
//  GGCharts
//
//  Created by 黄舜 on 17/9/12.
//  Copyright © 2017年 I really is a farmer. All rights reserved.
//

#import "BaseLineBarSet.h"

#import "GGBarData.h"
#import "GGLineData.h"

@interface LineBarDataSet : BaseLineBarSet

/**
 * 柱状图数据数组
 */
@property (nonatomic, strong) NSArray <GGBarData *> *barAry;

/**
 * 折线图数据数组
 */
@property (nonatomic, strong) NSArray <GGLineData *> * lineAry;

/**
 * 柱状图颜色
 * 优先级高于 BarData.fillColor
 *
 * @param indexPath 柱状位置
 * @param number 柱状图数据
 *
 * @return 柱状图颜色
 */
@property (nonatomic, copy) UIColor *(^barColorsAtIndexPath)(NSIndexPath *indexPath, NSNumber * number);

/**
 * 中间分割线线宽
 */
@property (nonatomic, assign) CGFloat midLineWidth;

/**
 * 中间线颜色
 */
@property (nonatomic, strong) UIColor * midLineColor;

@end
