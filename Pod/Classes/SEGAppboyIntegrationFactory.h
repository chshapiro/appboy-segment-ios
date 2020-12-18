#import <Foundation/Foundation.h>
#if __has_include(<Segment/SEGIntegration.h>)
#import <Segment/SEGIntegrationFactory.h>
#elif __has_include(<Analytics/SEGIntegration.h>)
#import <Analytics/SEGIntegrationFactory.h>
#elif SWIFT_PACKAGE
#import "SEGIntegrationFactory.h"
#endif
#import "SEGAppboyHelper.h"
#import "SEGAppboyIntegration.h"

@interface SEGAppboyIntegrationFactory : NSObject<SEGIntegrationFactory>

@property (readonly) SEGAppboyHelper *appboyHelper;
// Passed to Appboy as appboyOptions, available keys for configuration
// are documented in Appboy.h
@property NSDictionary *appboyOptions;

+ (instancetype)instance;

- (void)saveLaunchOptions:(NSDictionary *)launchOptions;
- (void)saveRemoteNotification:(NSDictionary *)userInfo;

@end
