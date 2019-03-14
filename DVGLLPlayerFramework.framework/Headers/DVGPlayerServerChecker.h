
#import <Foundation/Foundation.h>

static NSString* const kDVGPlayerServerCheckerDwnMetaTempl = @"{url_base}checkHealth";
@interface DVGPlayerServerChecker : NSObject // <SimplePingDelegate>

- (void)addServers:(NSArray*)serverUrls;
- (NSString*)getOptimalServer;

+ (DVGPlayerServerChecker*)getActiveCheckerForURL:(NSString*)serverConfigUrl;// TBD: configure URL for server lists
+ (double)unixStamp;
@end
