/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMRoad : NSObject 
{
    NSUInteger numPoints;
    struct Point { NSInteger x1; NSInteger x2; } *points;
}


- (id)initWithPoints:(struct Point { NSInteger x1; NSInteger x2; }*)arg1 count:(unsigned long)arg2;
- (void)getPoints:(struct Point {}**)arg1 count:(NSUInteger*)arg2;
- (void)dealloc;

@end