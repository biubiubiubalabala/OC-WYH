//
//  HNBPhotoPreviewController.h
//  HNBImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HNBAssetModel;
@interface HNBPhotoPreviewController : UIViewController

@property (nonatomic, strong) NSMutableArray *models;                  ///< All photo models / 所有图片模型数组
@property (nonatomic, strong) NSMutableArray *photos;                  ///< All photos  / 所有图片数组
@property (nonatomic, assign) NSInteger currentIndex;           ///< Index of the photo user click / 用户点击的图片的索引
@property (nonatomic, assign) BOOL isSelectOriginalPhoto;       ///< If YES,return original photo / 是否返回原图

@property (nonatomic, assign) BOOL isIdeaBack;      //意见反馈的相册

/// Return the new selected photos / 返回最新的选中图片数组
@property (nonatomic, copy) void (^backButtonClickBlock)(BOOL isSelectOriginalPhoto);
@property (nonatomic, copy) void (^backButtonClickBlockWithPreviewType)(NSArray<HNBAssetModel *> *models,NSArray *assets);
@property (nonatomic, copy) void (^okButtonClickBlock)(BOOL isSelectOriginalPhoto);
@property (nonatomic, copy) void (^okButtonClickBlockWithPreviewType)(NSArray<UIImage *> *photos,NSArray<HNBAssetModel *> *models,NSArray *assets,BOOL isSelectOriginalPhoto);

@end
