/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKEventStore, NSPredicate;

@interface EKPredicateCount : NSObject {
    id _callback;
    BOOL _finished;
    NSPredicate *_predicate;
    unsigned int _previous;
    EKEventStore *_store;
}

+ (id)countOfRemindersWithPredicate:(id)arg1 store:(id)arg2 callback:(id)arg3;

- (void)_receivedCount:(int)arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 store:(id)arg2 callback:(id)arg3;
- (void)run;
- (void)terminate;

@end
