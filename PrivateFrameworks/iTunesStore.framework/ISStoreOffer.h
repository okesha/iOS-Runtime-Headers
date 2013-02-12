/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSSet, NSString, NSURL;

@interface ISStoreOffer : NSObject <NSCopying> {
    unsigned int _isPreorder : 1;
    NSString *_actionDisplayName;
    NSURL *_assetURL;
    NSString *_buyParameters;
    NSSet *_dsIDs;
    NSUInteger _durationInMS;
    NSString *_incompatibleDeviceMessage;
    NSString *_incompatibleDeviceTitle;
    NSURL *_incompatibleDeviceURL;
    NSString *_incompatibleDeviceURLTitle;
    NSString *_incompatibleSoftwareMessage;
    NSString *_incompatibleSoftwareTitle;
    NSURL *_incompatibleSoftwareURL;
    NSString *_incompatibleSoftwareURLTitle;
    long long _mediaFileSize;
    NSInteger _mediaType;
    NSString *_minimumProductVersion;
    NSUInteger _previewDuration;
    NSURL *_previewURL;
    NSString *_price;
    id _requiredCapabilities;
    NSInteger _shouldShowPlusIcon;
    NSInteger _supportedDeviceType;
}

@property NSInteger mediaType;
@property(getter=isPreorder,readonly) BOOL preorder;
@property(readonly) id requiredCapabilities;
@property(readonly) NSInteger shouldShowPlusIcon;

- (id)actionDisplayName;
- (id)assetURL;
- (id)buyParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dialogForIncompatibleDeviceType;
- (id)dialogForIncompatibleProductVersion;
- (long long)downloadFileSize;
- (id)dsIDs;
- (NSUInteger)durationInMS;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isPreorder;
- (NSInteger)mediaType;
- (id)minimumProductVersion;
- (NSUInteger)previewDurationInMS;
- (id)previewURL;
- (id)priceDisplay;
- (id)requiredCapabilities;
- (void)setMediaType:(NSInteger)arg1;
- (NSInteger)shouldShowPlusIcon;
- (BOOL)supportsDeviceType:(NSInteger)arg1;

@end