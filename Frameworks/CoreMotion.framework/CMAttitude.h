/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAttitude : NSObject <NSCopying, NSCoding> {
    id _internal;
}

@property(readonly) double pitch;
@property(readonly) struct { double x1; double x2; double x3; double x4; } quaternion;
@property(readonly) double roll;
@property(readonly) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } rotationMatrix;
@property(readonly) double yaw;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)multiplyByInverseOfAttitude:(id)arg1;
- (double)pitch;
- (struct { double x1; double x2; double x3; double x4; })quaternion;
- (double)roll;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })rotationMatrix;
- (void)setQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;
- (double)yaw;

@end
