//
//  JXSQLiteVC.m
//  DataStoreDemo
//
//  Created by hnbwyh on 2018/7/23.
//  Copyright © 2018年 hainbwyh. All rights reserved.
//

#import "JXSQLiteVC.h"
#import "JXFMDBMOperator.h"
#import "PersonInfo.h"

@interface JXSQLiteVC ()

@end

@implementation JXSQLiteVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.displayLabel.text = @" 1> FMDB简单操作分析  2> 点击启动按钮,删除旧数据库，创建新数据库 \n \n \n 3> 观察沙盒路径文件变化";
}


-(void)rightNavBtnEvent:(UIButton *)btn{
    [[JXFMDBMOperator sharedInstance] openLog];
    
    // 删除旧库
    [[JXFMDBMOperator sharedInstance] deleteDataBaseWithFileName:NSStringFromClass([self class])];
    // 创建新库
    [[JXFMDBMOperator sharedInstance] createDataBaseWithFileName:NSStringFromClass([self class])];
    // 创建表
    [[JXFMDBMOperator sharedInstance] createTableWithModelCls:[PersonInfo class]];
    // 插入数据
    
    // 读取数据
    
    // 查询数据
}
@end