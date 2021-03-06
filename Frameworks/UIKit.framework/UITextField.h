/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextFieldDelegate>, <UITextInputDelegate>, <UITextInputTokenizer>, NSArray, NSAttributedString, NSDictionary, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UIBaselineLayoutStrut, _UITextServiceSession;

@interface UITextField : UIControl <UIPopoverControllerDelegate, UITextInput, NSCoding> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int secureTextChanged : 1; 
        unsigned int guard : 1; 
        unsigned int delegateRespondsToHandleKeyDown : 1; 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsOnBeginEditing : 1; 
        unsigned int clearsPlaceholderOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int canBecomeFirstResponder : 1; 
        unsigned int shouldSuppressShouldBeginEditing : 1; 
        unsigned int inResignFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int contentsRTL : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int implementsCustomDrawing : 1; 
        unsigned int needsClearing : 1; 
        unsigned int suppressContentChangedNotification : 1; 
        unsigned int allowsEditingTextAttributes : 1; 
        unsigned int usesAttributedText : 1; 
        unsigned int backgroundViewState : 2; 
        unsigned int clearsOnInsertion : 1; 
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    BOOL _avoidBecomeFirstResponder;
    UIImage *_background;
    UITextFieldBorderView *_backgroundView;
    NSArray *_baselineLayoutConstraints;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    int _borderStyle;
    UIButton *_clearButton;
    int _clearButtonMode;
    } _clearButtonOffset;
    BOOL _deferringBecomeFirstResponder;
    _UITextServiceSession *_definitionSession;
    id _delegate;
    UIImage *_disabledBackground;
    UITextFieldBorderView *_disabledBackgroundView;
    float _fullFontSize;
    UIImageView *_iconView;
    UIView *_inputAccessoryView;
    UIView *_inputView;
    UITextInteractionAssistant *_interactionAssistant;
    UILabel *_label;
    float _labelOffset;
    _UITextServiceSession *_learnSession;
    UIView *_leftView;
    int _leftViewMode;
    } _leftViewOffset;
    float _minimumFontSize;
    UITextInputTraits *_nonAtomTraits;
    float _paddingBottom;
    float _paddingLeft;
    float _paddingRight;
    float _paddingTop;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_prefixLabel;
    float _progress;
    UIView *_rightView;
    int _rightViewMode;
    } _rightViewOffset;
    int _scrollXOffset;
    int _scrollYOffset;
    } _selectionRange;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    float _shadowBlur;
    UIColor *_shadowColor;
    } _shadowOffset;
    NSString *_style;
    UITextFieldLabel *_suffixLabel;
    UITextFieldBackgroundView *_systemBackgroundView;
    NSAttributedString *_text;
    UIColor *_textColor;
    } _textFieldFlags;
    NSString *_textFont;
    UITextFieldLabel *_textLabel;
    UITextInputTraits *_traits;
}

@property(setter=_setBaselineLayoutConstraints:,copy) NSArray * _baselineLayoutConstraints;
@property(setter=_setBaselineLayoutLabel:,retain) _UIBaselineLayoutStrut * _baselineLayoutLabel;
@property BOOL adjustsFontSizeToFitWidth;
@property BOOL allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedPlaceholder;
@property(copy) NSAttributedString * attributedText;
@property int autocapitalizationType;
@property int autocorrectionType;
@property(retain) UIImage * background;
@property(readonly) UITextPosition * beginningOfDocument;
@property int borderStyle;
@property int clearButtonMode;
@property BOOL clearsOnBeginEditing;
@property BOOL clearsOnInsertion;
@property <UITextFieldDelegate> * delegate;
@property(retain) UIImage * disabledBackground;
@property(getter=isEditing,readonly) BOOL editing;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) UITextPosition * endOfDocument;
@property(retain) UIFont * font;
@property(retain) UIView * inputAccessoryView;
@property <UITextInputDelegate> * inputDelegate;
@property(retain) UIView * inputView;
@property int keyboardAppearance;
@property int keyboardType;
@property(retain) UIView * leftView;
@property int leftViewMode;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property float minimumFontSize;
@property(copy) NSString * placeholder;
@property int returnKeyType;
@property(retain) UIView * rightView;
@property int rightViewMode;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property int selectionAffinity;
@property int spellCheckingType;
@property(copy) NSString * text;
@property int textAlignment;
@property(retain) UIColor * textColor;
@property(readonly) UIView * textInputView;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(copy) NSDictionary * typingAttributes;

- (void)__resumeBecomeFirstResponder;
- (void)_addShortcut:(id)arg1;
- (void)_applicationResuming:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (id)_attributedText;
- (id)_baselineLayoutConstraints;
- (id)_baselineLayoutLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_baselineLeftViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_becomeFirstResponder;
- (void)_becomeFirstResponderAndMakeVisible;
- (BOOL)_canDrawContent;
- (void)_clearBackgroundViews;
- (id)_clearButton;
- (void)_clearButtonClicked:(id)arg1;
- (id)_clearButtonImageForState:(unsigned int)arg1;
- (void)_clearSelectionUI;
- (void)_clearStyle;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_createBaselineLayoutLabelIfNecessary;
- (id)_createCSSStyleDeclarationForWebView:(id)arg1;
- (int)_currentTextAlignment;
- (void)_define:(id)arg1;
- (id)_dictationInterpretations;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_endedEditing;
- (id)_fieldEditor;
- (BOOL)_fieldEditorAttached;
- (id)_findWebViewWordBoundaryFromPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_gkApplyTheme:(id)arg1;
- (BOOL)_hasContent;
- (BOOL)_heightShouldBeMini;
- (BOOL)_implementsCustomDrawing;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isShowingPlaceholder;
- (BOOL)_isShowingPrefix;
- (id)_keyboardResponder;
- (struct CGSize { float x1; float x2; })_leftViewOffset;
- (float)_marginTop;
- (BOOL)_partsShouldBeMini;
- (id)_placeholderColor;
- (id)_placeholderLabel;
- (id)_placeholderView;
- (void)_populateArchivedSubviews:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_prefixFrame;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (void)_removeDefinitionController;
- (void)_removeShortcutController;
- (BOOL)_requiresKeyboardResetOnReload;
- (void)_resetSelectionUI;
- (void)_resignFirstResponder;
- (struct CGSize { float x1; float x2; })_rightViewOffset;
- (id)_scriptingInfo;
- (struct CGPoint { float x1; float x2; })_scrollOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (void)_selectionMayChange:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2;
- (void)_setBaselineLayoutConstraints:(id)arg1;
- (void)_setBaselineLayoutLabel:(id)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setImplicitAlignment;
- (void)_setLeftViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setNeedsStyleRecalc;
- (void)_setPrefix:(id)arg1;
- (void)_setRightViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (void)_setUpBaselineLayoutConstraints;
- (BOOL)_shouldEndEditing;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)_showsAtomBackground;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (BOOL)_showsLeftView;
- (BOOL)_showsRightView;
- (void)_sizeChanged:(BOOL)arg1;
- (id)_style;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_suffixFrame;
- (Class)_systemBackgroundViewClass;
- (id)_text;
- (id)_textLabelView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forEditing:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_textSize;
- (struct CGSize { float x1; float x2; })_textSizeUsingFullFontSize:(BOOL)arg1;
- (void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)_transferTextFieldPropertiesFromText:(id)arg1;
- (void)_updateAtomBackground;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (void)_updateButtons;
- (void)_updateLabel;
- (void)_updatePlaceholderPosition;
- (void)_updateRTLStateForText:(id)arg1 updateAlignment:(BOOL)arg2;
- (void)_updateTextColor;
- (void)_updateTextLabel;
- (void)_windowBecameKey;
- (id)actualFont;
- (float)actualMinimumFontSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedCaretRectForCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)adjustsFontSizeToFitWidth;
- (BOOL)allowsEditingTextAttributes;
- (int)atomStyle;
- (void)attachFieldEditor:(id)arg1;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)background;
- (id)backgroundColor;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)borderStyle;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)clearButton;
- (int)clearButtonMode;
- (struct CGSize { float x1; float x2; })clearButtonOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)clearText;
- (BOOL)clearsOnBeginEditing;
- (BOOL)clearsOnInsertion;
- (BOOL)clearsPlaceholderOnBeginEditing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)configureFromScriptTextField:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)copy:(id)arg1;
- (void)createPlaceholderIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (id)customOverlayContainer;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (id)disabledBackground;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)drawBorder:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPrefixInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSuffixInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsAsAtom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)fieldEditor:(id)arg1 shouldReplaceWithText:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)finishedSettingPlaceholder;
- (void)finishedSettingTextOrAttributedText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconRect;
- (BOOL)inPopover;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isReallyFirstResponder;
- (BOOL)isUndoEnabled;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (id)leftView;
- (int)leftViewMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (float)minimumFontSize;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (float)paddingBottom;
- (float)paddingLeft;
- (float)paddingRight;
- (float)paddingTop;
- (void)paste:(id)arg1;
- (id)placeholder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)rightView;
- (int)rightViewMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (void)selectAllFromFieldEditor:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (int)selectionGranularity;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (void)setBackground:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (void)setBorderStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClearButtonMode:(int)arg1;
- (void)setClearButtonOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setClearButtonStyle:(int)arg1;
- (void)setClearsOnBeginEditing:(BOOL)arg1;
- (void)setClearsOnInsertion:(BOOL)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIcon:(id)arg1;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelOffset:(float)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftViewMode:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPaddingTop:(float)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightViewMode:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionAffinity:(int)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)setSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUndoEnabled:(BOOL)arg1;
- (float)shadowBlur;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textLabel;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateConstraints;
- (id)viewForBaselineLayout;
- (id)webView;
- (void)willAttachFieldEditor:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;

@end
