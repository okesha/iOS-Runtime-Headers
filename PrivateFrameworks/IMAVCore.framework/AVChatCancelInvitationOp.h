/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, NSString;

@interface AVChatCancelInvitationOp : IMExtendedOperation {
    NSString *_conferenceID;
    IMHandle *_imHandle;
    unsigned int _sessionID;
}

- (void)dealloc;
- (void)didFinish;
- (id)initWithIMHandle:(id)arg1 avChat:(id)arg2;

@end
