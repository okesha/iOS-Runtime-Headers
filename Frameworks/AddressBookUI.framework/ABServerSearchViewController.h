/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABServerSearchController;



@interface ABServerSearchViewController : ABAbstractViewController <ABServerSearchControllerDelegate>
{
    ABServerSearchController *_serverSearchController;
}


- (id)serverSearchControllerStyleProvider:(id)arg1;
- (id)initWithModel:(id)arg1;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)dealloc;

@end