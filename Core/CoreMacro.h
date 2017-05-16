//
//  CoreMacro.h
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/16.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#ifndef CoreMacro_h
#define CoreMacro_h

/** 适配宏*/
#define HeightScale_IOS6(height) ((height/667.0) * Screen_height)
#define WidthScale_IOS6(width) ((width/375.0) * Screen_width)

#define HeightScale_IOS6P(height) ((height/960.0) * Screen_height)
#define WidthScale_IOS6P(width) ((width/540.0) * Screen_width)
/** 根据UI适配*/
#define HeightScale_IOSUI(height) ((height/640.32) * Screen_height)
#define WidthScale_IOSUI(width) ((width/360.0) * Screen_width)
/** 如果是iOS7以及之后的版本*/
#define NLSystemVersionGreaterOrEqualThan(version) ([[[UIDevice currentDevice] systemVersion] floatValue] >= version)
///** iOS 7 */
#define IOS7_OR_LATER NLSystemVersionGreaterOrEqualThan(7.0)
///** iOS8*/
#define IOS8_OR_LATER NLSystemVersionGreaterOrEqualThan(8.0)
/** iOS9*/
#define IOS9_OR_LATER NLSystemVersionGreaterOrEqualThan(9.0)


#pragma mark ------一些个常用的宽高等----
#pragma mark 屏幕宽高
#define Screen_width [UIScreen mainScreen].bounds.size.width
#define Screen_height [UIScreen mainScreen].bounds.size.height

#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)


/** 状态条高度*/
#define StatusBar_Height 20
/**导航条高度*/
#define NavBar_Height 44
/** tabBar高度 默认49*/
#define TabBar_Height 44
/** 导航条整体高度 */
#define NavgationBar_Height 64
/** frame */
#define Frame(x, y, width, height) CGRectMake((x),(y),(width),(height))
/** Size*/
#define Size(width, height) CGSizeMake((width), (height))
#pragma mark ----- 常用的对象 --------
/** 通知中心*/
#define kNotificationCenter [NSNotificationCenter defaultCenter]
/** 当前应用程序的主窗口 */
#define kKeyWindow [UIApplication sharedApplication].keyWindow
/** 用户的 NSUserDefault 对象*/
#define kUserDefault [NSUserDefaults standardUserDefaults]
/** 应用程序的AppDelegate */
#define kAppDelegate  ((AppDelegate*)[UIApplication sharedApplication].delegate)

#pragma mark 常用的多线程的名字的宏
/** Global_queue 异步线程*/
#define kGlobalQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)
/** Main_queue  主线程 */
#define kMainQueue dispatch_get_main_queue()

#pragma mark------颜色，字体等----------
//字体
#define appFont [UIFont systemFontOfSize:10.0].fontName

#pragma mark 颜色
/**大酱颜色*/
#define motifColor [UIColor colorWithRed:154/255.0 green:0.0 blue:0.0 alpha:1]

/** 透明度为 1 的 RGB */
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
/** RGBA */
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

/** 使用十六进制的颜色*/
#define UIColorFromRGB(rgbValue) ((kIOSVersion>=10.0)?[UIColor colorWithDisplayP3Red:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]:[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0])

#define RGBA(R,G,B,A) (kIOSVersion>=10.0?[UIColor colorWithDisplayP3Red:(R/255.f) green:(G/255.f) blue:(B/255.f) alpha:A]:[UIColor colorWithRed:(R/255.f) green:(G/255.f) blue:(B/255.f) alpha:A])

/** 随机色 */
#define RandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]

/** 常用颜色*/
#define BlackColor [UIColor blackColor] //黑色
#define WhiteColor [UIColor whiteColor] //白色
#define ClearColor [UIColor clearColor] //无色
#define GlobalBg  RGBCOLOR(236,235,235)

#define BackgroundColor RGBCOLOR(236,235,235)

#pragma mark---便捷颜色---color for test---用来 Debug 的颜色
#define OrangeColor    [UIColor orangeColor]   //橙色
#define PurpleColor    [UIColor purpleColor]   //紫色
#define RedColor       [UIColor redColor]
#define WhiteColor     [UIColor whiteColor]
#define GrayColor      [UIColor grayColor]
#define YellowColor    [UIColor yellowColor]
#define GreenColor     [UIColor greenColor]
#define MagentaColor   [UIColor magentaColor] //品红,洋红 /mə'dʒentə/
#define BlueColor      [UIColor blueColor]
#define BrownColor     [UIColor brownColor]

// Cell的分割线的颜色
#define CellSeparatorLineColor UIColorFromRGB(0xdcdcdc)

#pragma mark------ 字体------
#define iosfont @"PingFangSC-Regular"
/** 字体的宏定义*/
#define font(size) [UIFont systemFontOfSize:(size)]
/** 粗体字的宏定义*/
#define boldFont(size) [UIFont boldSystemFontOfSize:(size)]

#pragma mark--  ------特殊的宏------

#define MAS_SHORTHAND// 只要添加了这个宏，就不用带mas_前缀
#define MAS_SHORTHAND_GLOBALS// 只要添加了这个宏，equalTo就等价于mas_equalTo

/** 类方法 中用来获取当前类的 self 指针 */
#define ClassSelf [self class]
/** 若引用 weakSelf */
#define Weak_Self(weakSelf)  __weak __typeof(&*self)weakSelf = self ;
/** 获取当前应用的版本号，这个是从项目的plist文件中获取*/
#define AppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

/************以下为调试和打包相关固定写法勿动*******************/
/*
 Debug : 调试（开发阶段），系统会自定义一个叫做DEBUG的宏
 Release : 发布（打包），系统会自动删掉叫做DEBUG的宏
 */

//#ifdef DEBUG
////PS： 以后调试的打印统一使用 ZBLog(...); 打包时候自动会去掉NSLog信息。ZB--> ：珠宝项目名缩写
//#define NSLog(...)  NSLog(__VA_ARGS__)
//
//#else
//
//#define NSLog(...)
//
//#endif

#ifdef DEBUG
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...)
#endif

/***********以上为调试和打包相关固定写法勿动*******************/

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

//判断系统版本
#define kIOSVersion ((float)[[[UIDevice currentDevice] systemVersion] doubleValue])

//字体适配宏
#define LittleHomeFont (IS_IPHONE_6 ? 17:(IS_IPHONE_6P ? 17:14))
#define MiddleHomeFont (IS_IPHONE_6 ? 19:(IS_IPHONE_6P ? 19:16))
#define BigHomeFont (IS_IPHONE_6 ? 21:(IS_IPHONE_6P ? 21:18))
#define LargeHomeFont (IS_IPHONE_6 ? 23:(IS_IPHONE_6P ? 23:21))

#define IS_IPHONE_5_OR_LESS (Screen_width <= 320.0)
#define IS_IPHONE_6 (Screen_width == 375.0)
#define IS_IPHONE_6P (Screen_width == 414.0)

//iOS8 / iOS8以上字体适配

//pangfang-light
#define HWFONTPingFangSC_Light(s) [UIFont fontWithName:@"PingFangSC-Light" size:s]
#define HWFONTHelvetica_light(s) [UIFont fontWithName:@"Helvetica-Light" size:s]

//ping-regular
#define HWFONTPingFangSC_Regular(s) [UIFont fontWithName:@"PingFangSC-Regular" size:s]
#define HWFONTHelvetica_regular(s) [UIFont fontWithName:@"Helvetica" size:s]

//ping-medium
#define HWFONTPingFangSC_Medium(s) [UIFont fontWithName:@"PingFangSC-Medium" size:s]
#define HWFONTPingFangSC_Semibold(s) [UIFont fontWithName:@"PingFangSC-Semibold" size:s]
#define HWFONTHelvetica_medium(s) [UIFont fontWithName:@"Helvetica" size:s]

//helvetica-light
#define HWFONT_Helvetica(s) [UIFont fontWithName:@"Helvetica" size:s]

#define HWFONT_Helvetica_Light(s) [UIFont fontWithName:@"Helvetica-Light" size:s]

#define HWFONT_Helvetica_Bold(s) [UIFont fontWithName:@"Helvetica-Bold" size:s]

//字体正式适配
#define HWFONT_PingFangSC_Light(s) (IOS9_OR_LATER ? HWFONTPingFangSC_Light(s):HWFONTHelvetica_light(s))

#define HWFONT_PingFangSC_Regular(s) (IOS9_OR_LATER ? HWFONTPingFangSC_Regular(s):HWFONTHelvetica_medium(s))

#define HWFONT_PingFangSC_Medium(s) (IOS9_OR_LATER ? HWFONTPingFangSC_Medium(s):HWFONTHelvetica_medium(s))

#define HWFONT_PingFangSC_Semibold(s) (IOS9_OR_LATER ? HWFONTPingFangSC_Semibold(s):HWFONT_Helvetica_Bold(s))

/** 判断json对象是否为空*/
#define judgeOBJC(str) ([str isKindOfClass:[NSNull class]] || !str || [str isEqualToString: @""])

#pragma mark -----时间格式-----
#define TimeYearMonth @"yyyy年M月份"
#define TimeFormat30Day @"yyyy-MM"
/** HH 是24进制  hh 是十二进制的*/
#define TimeFormat24 @"yyyy-MM-dd HH:mm"
/** 十二进制的小时*/
#define TimeFormat12 @"yyyy-MM-dd hh:mm"

//合写模式
typedef NS_ENUM(NSUInteger , BaseModelType){
    freeDomType = 0,      //自由参与
    publicRewardType = 1, //公开悬赏
    payToReadType = 2,    //付费邀请
    pulishType = 3,       //专栏
};

//性别
typedef NS_ENUM(NSUInteger, SexSelect){
    SexOther = 0, //保密
    SexMan,     //男
    SexWomen    //女
};

//婚姻
typedef NS_ENUM(NSUInteger, MarriedSelect){
    MarriedOther = 0, //保密
    MarriedNo,     //未婚
    MarriedYes    //已婚
};


#pragma mark - 友盟
#define UmengAppkey @"579b3d9367e58e5323002bfc"

#define WXAppId @"wx43172f0522415486"
#define WXAppKey @"ff86b25d6bed9628cfa5688cc629c203"

#define QQAppId @"1105720712"
#define QQAppKey @"5cfaiSzkTRiUmwZc"

#define SinaAppKey @"3856465712"
#define SinaAppSecret @"f700808b5f9584b0d197d16c37cd1b00"

#pragma mark - 讯飞
#define IFlyAppId @"57df5cab"

#pragma mark - Bugtag
#define BugTagAppkey @"3da2fe01649ee2cc1a4e3a04e97692dc"

#pragma mark - 极光
#define JpushAppKey @"1e81feba52fa77201d144528"
#define JpushNews_Key @"news" //用于推送的新闻id
#define JpushNoInfo @"JpushNotification" //收到推送的通知
#define JpushNewVersion @"update" //收到版本更新的通知

#define WEAKSELF() __weak __typeof(&*self)weakSelf = self;
#define STRONGSELF() __strong __typeof(&*self)strongSelf = self;


#define APPLE_ID @"1167952872"

// 过期提醒
#define HWDeprecated(desc) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, desc)

// 适用版本
#define HWAvailable(_ios) NS_AVAILABLE_IOS(_ios)

// 检查用户是否登录，如果没有请到HWTool里面的ifNotLogin方法里处理
#define HWCheckUser_id   \
if([HWTool ifNotLogin]){ \
return;  \
} \

//简化单例 (如:sharedWyhClass)
//.h
#define wyh_singleton_interface(class) \
+(instancetype)shared##class; \

//.m
#define wyh_singleton_implementation(class) \
static class *_instance##class; \
\
+ (id)allocWithZone:(struct _NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance##class = [super allocWithZone:zone]; \
}); \
\
return _instance##class; \
} \
\
+ (instancetype)shared##class \
{ \
if (_instance##class == nil) { \
_instance##class = [[class alloc] init]; \
} \
\
return _instance##class; \
}

//获取当前正在活跃的控制器
#define HWCurrentViewController \
[HWPublishTool currentVC];

#endif /* CoreMacro_h */
