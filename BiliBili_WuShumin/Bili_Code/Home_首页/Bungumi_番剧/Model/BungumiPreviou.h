//
//	BungumiPreviou.h
//
//	Create by 书敏 吴 on 14/10/2016
//	Copyright © 2016. All rights reserved.
//

//	Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>
#import "BungumiList.h"

@interface BungumiPreviou : NSObject

@property (nonatomic, strong) NSArray * list;
@property (nonatomic, assign) NSInteger season;
@property (nonatomic, assign) NSInteger year;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

-(NSDictionary *)toDictionary;
@end