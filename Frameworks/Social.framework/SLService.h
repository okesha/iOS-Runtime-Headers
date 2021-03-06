/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLService : NSObject {
}

+ (id)allServices;
+ (id)serviceForServiceType:(id)arg1;

- (id)accountType;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (BOOL)hasAccounts;
- (BOOL)isAvailable;
- (BOOL)isFirstClassService;
- (BOOL)isServiceTypeSupportedByConfiguration;
- (BOOL)isSheetAccessPermitted;
- (int)maximumImageCount;
- (int)maximumURLCount;
- (id)serviceType;

@end
