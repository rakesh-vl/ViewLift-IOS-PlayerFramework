#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef VLPLAYERLIB_SWIFT_H
#define VLPLAYERLIB_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="VLPlayerLib",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


@class GCKCastContext;

SWIFT_PROTOCOL("_TtP11VLPlayerLib26ChromeCastPlaybackDelegate_")
@protocol ChromeCastPlaybackDelegate <NSObject>
@optional
/// important:
///
/// Delgate method - called when ChromeCast Status Updated
/// remark:
///
/// Use this method to perform anything after cast connected or disconnected
/// \param isConnected Bool for connected status
///
- (void)chromeCastConnectionStatusUpdateWithIsConnected:(BOOL)isConnected castContextSessionInstance:(GCKCastContext * _Nullable)castContextSessionInstance;
- (void)startAnimatingCastIcon;
@end


@class NSCoder;
@class UIWindow;
@class CAAnimation;
@class CALayer;
@class NSNotification;
@class UIGestureRecognizer;
@class UIView;
@class NSString;
@class NSAttributedString;
@class UIFont;
@class UIColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC11VLPlayerLib12MarqueeLabel")
@interface MarqueeLabel : UILabel <CAAnimationDelegate>
/// A boolean property that sets whether the <code>MarqueeLabel</code> should behave like a normal <code>UILabel</code>.
/// When set to <code>true</code> the <code>MarqueeLabel</code> will behave and look like a normal <code>UILabel</code>, and  will not begin any scrolling animations.
/// Changes to this property take effect immediately, removing any in-flight animation as well as any edge fade. Note that <code>MarqueeLabel</code>
/// will respect the current values of the <code>lineBreakMode</code> and <code>textAlignment</code>properties while labelized.
/// To simply prevent automatic scrolling, use the <code>holdScrolling</code> property.
/// Defaults to <code>false</code>.
/// seealso:
/// holdScrolling
/// seealso:
/// lineBreakMode
/// note:
/// The label will not automatically scroll when this property is set to <code>true</code>.
/// warning:
/// The UILabel default setting for the <code>lineBreakMode</code> property is <code>NSLineBreakByTruncatingTail</code>, which truncates
/// the text adds an ellipsis glyph (…). Set the <code>lineBreakMode</code> property to <code>NSLineBreakByClipping</code> in order to avoid the
/// ellipsis, especially if using an edge transparency fade.
@property (nonatomic) IBInspectable BOOL labelize;
/// A boolean property that sets whether the <code>MarqueeLabel</code> should hold (prevent) automatic label scrolling.
/// When set to <code>true</code>, <code>MarqueeLabel</code> will not automatically scroll even its text is larger than the specified frame,
/// although the specified edge fades will remain.
/// To set <code>MarqueeLabel</code> to act like a normal UILabel, use the <code>labelize</code> property.
/// Defaults to <code>false</code>.
/// note:
/// The label will not automatically scroll when this property is set to <code>true</code>.
/// seealso:
/// labelize
@property (nonatomic) IBInspectable BOOL holdScrolling;
/// A boolean property that sets whether the <code>MarqueeLabel</code> should only begin a scroll when tapped.
/// If this property is set to <code>true</code>, the <code>MarqueeLabel</code> will only begin a scroll animation cycle when tapped. The label will
/// not automatically being a scroll. This setting overrides the setting of the <code>holdScrolling</code> property.
/// Defaults to <code>false</code>.
/// note:
/// The label will not automatically scroll when this property is set to <code>false</code>.
/// seealso:
/// holdScrolling
@property (nonatomic) IBInspectable BOOL tapToScroll;
@property (nonatomic) IBInspectable CGFloat scrollDuration SWIFT_DEPRECATED_MSG("Use speed property instead");
@property (nonatomic) IBInspectable CGFloat scrollRate SWIFT_DEPRECATED_MSG("Use speed property instead");
/// A buffer (offset) between the leading edge of the label text and the label frame.
/// This property adds additional space between the leading edge of the label text and the label frame. The
/// leading edge is the edge of the label text facing the direction of scroll (i.e. the edge that animates
/// offscreen first during scrolling).
/// Defaults to <code>0</code>.
/// note:
/// The value set to this property affects label positioning at all times (including when <code>labelize</code> is set to <code>true</code>),
/// including when the text string length is short enough that the label does not need to scroll.
/// note:
/// For Continuous-type labels, the smallest value of <code>leadingBuffer</code>, <code>trailingBuffer</code>, and <code>fadeLength</code>
/// is used as spacing between the two label instances. Zero is an allowable value for all three properties.
/// seealso:
/// trailingBuffer
@property (nonatomic) IBInspectable CGFloat leadingBuffer;
/// A buffer (offset) between the trailing edge of the label text and the label frame.
/// This property adds additional space (buffer) between the trailing edge of the label text and the label frame. The
/// trailing edge is the edge of the label text facing away from the direction of scroll (i.e. the edge that animates
/// offscreen last during scrolling).
/// Defaults to <code>0</code>.
/// note:
/// The value set to this property has no effect when the <code>labelize</code> property is set to <code>true</code>.
/// note:
/// For Continuous-type labels, the smallest value of <code>leadingBuffer</code>, <code>trailingBuffer</code>, and <code>fadeLength</code>
/// is used as spacing between the two label instances. Zero is an allowable value for all three properties.
/// seealso:
/// leadingBuffer
@property (nonatomic) IBInspectable CGFloat trailingBuffer;
/// The length of transparency fade at the left and right edges of the frame.
/// This propery sets the size (in points) of the view edge transparency fades on the left and right edges of a <code>MarqueeLabel</code>. The
/// transparency fades from an alpha of 1.0 (fully visible) to 0.0 (fully transparent) over this distance. Values set to this property
/// will be sanitized to prevent a fade length greater than 1/2 of the frame width.
/// Defaults to <code>0</code>.
@property (nonatomic) IBInspectable CGFloat fadeLength;
/// The length of delay in seconds that the label pauses at the completion of a scroll.
@property (nonatomic) IBInspectable CGFloat animationDelay;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Returns a newly initialized <code>MarqueeLabel</code> instance.
/// The default scroll duration of 7.0 seconds and fade length of 0.0 are used.
/// \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.
///
///
/// returns:
/// An initialized <code>MarqueeLabel</code> object or nil if the object couldn’t be created.
- (nonnull instancetype)initWithFrame:(CGRect)frame;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder SWIFT_AVAILABILITY(ios,introduced=8.0);
- (void)layoutSubviews;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)didMoveToWindow;
- (CGSize)sizeThatFits:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (void)drawLayer:(CALayer * _Nonnull)layer inContext:(CGContextRef _Nonnull)ctx;
- (void)restartForViewController:(NSNotification * _Nonnull)notification;
- (void)labelizeForController:(NSNotification * _Nonnull)notification;
- (void)animateForController:(NSNotification * _Nonnull)notification;
/// Immediately resets the label to the home position, cancelling any in-flight scroll animation, and restarts the scroll animation if the appropriate conditions are met.
/// seealso:
/// resetLabel
/// seealso:
/// triggerScrollStart
- (void)restartLabel;
/// Immediately resets the label to the home position, cancelling any in-flight scroll animation.
/// The text is immediately returned to the home position. Scrolling will not resume automatically after a call to this method.
/// To re-initiate scrolling use a call to <code>restartLabel</code> or <code>triggerScrollStart</code>, or make a change to a UILabel property such as text, bounds/frame,
/// font, font size, etc.
/// seealso:
/// restartLabel
/// seealso:
/// triggerScrollStart
- (void)shutdownLabel;
- (void)labelWasTapped:(UIGestureRecognizer * _Nonnull)recognizer;
- (UIView * _Nonnull)viewForBaselineLayout SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) UIView * _Nonnull viewForLastBaselineLayout;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@property (nonatomic, strong) UIFont * _Null_unspecified font;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
@property (nonatomic, strong) UIColor * _Nullable shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic, strong) UIColor * _Nullable highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) UIBaselineAdjustment baselineAdjustment;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
- (void)tintColorDidChange;
@property (nonatomic) UIViewContentMode contentMode;
@property (nonatomic) BOOL isAccessibilityElement;
@end








SWIFT_CLASS("_TtC11VLPlayerLib7VLError")
@interface VLError : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol videoPlaybackDelegate;

SWIFT_CLASS("_TtC11VLPlayerLib8VLPlayer")
@interface VLPlayer : NSObject
@property (nonatomic, weak) id <videoPlaybackDelegate> _Nullable videoPlayerDelegate;
@property (nonatomic, weak) id <ChromeCastPlaybackDelegate> _Nullable castDelegate;
/// important:
///
/// Method - Used to initialize Video Player SDK
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     vlToken: Key(String) to intialize SDK
///   </li>
/// </ul>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





@interface VLPlayer (SWIFT_EXTENSION(VLPlayerLib))
- (void)play;
- (void)pause;
- (void)dispose;
- (void)destroy;
- (void)deinitialisePlayer;
- (void)setPlayerFitToFullScreen;
- (void)setPlayerFitToSmallScreenWithFrame:(CGRect)frame;
- (void)goFullScreen;
- (void)removeFullScreen;
/// important:
///
/// Method - Used to seek to specific duration
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     seconds: Time from where the video to be played from
///   </li>
/// </ul>
- (void)seekToSeconds:(double)seconds;
/// important:
///
/// Method - Used to seek live video to live position
- (void)seekToLivePosition;
/// important:
///
/// Method - Used to seek dvr video to live position
- (void)seekDVRToLivePosition;
/// important:
///
/// Method - Used to set initial start time
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     seconds: seconds to which video should be started
///   </li>
/// </ul>
- (void)startTimeWithSeconds:(double)seconds;
/// important:
///
/// Method - To get video source id and video title
- (NSDictionary<NSString *, NSString *> * _Nullable)getSource SWIFT_WARN_UNUSED_RESULT;
/// important:
///
/// Method - Used to set color of icons
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     color: hex value of color code
///   </li>
/// </ul>
- (void)setIconColorWithColor:(NSString * _Nonnull)color;
/// important:
///
/// Method - Used to set color of text
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     color: hex value of color code
///   </li>
/// </ul>
- (void)setTextColorWithColor:(NSString * _Nonnull)color;
/// important:
///
/// Method - Used to set progress bar background color
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     color: hex value of color code
///   </li>
/// </ul>
- (void)setProgressBarBGColorWithColor:(NSString * _Nonnull)color;
/// important:
///
/// Method - Used to set progress bar progress color
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     color: hex value of color code
///   </li>
/// </ul>
- (void)setProgressBarColorWithColor:(NSString * _Nonnull)color;
/// important:
///
/// Method - Used to set boolean flag which should player start playing video automatically
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     autoplay: boolean value either true or false
///   </li>
/// </ul>
- (void)shouldAutoplayWithAutoplay:(BOOL)autoplay;
- (BOOL)checkFullscreenState SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)getVideoPlayerView SWIFT_WARN_UNUSED_RESULT;
- (void)setNextVideoWithVideoId:(NSString * _Nonnull)videoId adTag:(NSString * _Nullable)adTag;
- (void)playNextVideoWithVideoId:(NSString * _Nullable)videoId vlToken:(NSString * _Nullable)vlToken adTag:(NSString * _Nullable)adTag isSuccess:(void (^ _Nonnull)(BOOL))isSuccess;
/// important:
///
/// Method - Used to mute video
- (void)shouldPlayMutedWithIsMuted:(BOOL)isMuted;
/// important:
///
/// Method - Used to set volume level
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     volumeLevel: integer value between 0 to 100
///   </li>
/// </ul>
- (void)setVolumeLevelWithVolumeLevel:(NSInteger)volumeLevel;
/// important:
///
/// Method - Used to get picture in picture button state
- (BOOL)isPictureInPictureSelected SWIFT_WARN_UNUSED_RESULT;
/// important:
///
/// Method - Used to set up Picture in Picture
- (void)setupPictureInPicture;
/// important:
///
/// Method - Used to enable/disable Picture In Picture
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     isPipSelected: boolean value based on button selection state
///   </li>
/// </ul>
- (void)pictureInPictureClickedWithIsPipSelected:(BOOL)isPipSelected;
/// important:
///
/// Method - Used to set closed caption visibility
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     captionsVisible: Boolean value either true or false
///   </li>
/// </ul>
- (void)setCaptionsVisiblityWithCaptionsVisible:(BOOL)captionsVisible;
/// important:
///
/// Method - Used to get player version number
- (NSString * _Nullable)getPlayerVersion SWIFT_WARN_UNUSED_RESULT;
/// important:
///
/// Method - Used to update player frame
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     frame: CGRect value
///   </li>
/// </ul>
- (void)updateVideoPlayerFrameWithFrame:(CGRect)frame;
@end


/// remark:
///
/// Confirm to this protocol and add callback methods to your view controller to get video playback and states
/// Also included Ads callback methods and chromecast methods.
SWIFT_PROTOCOL("_TtP11VLPlayerLib21videoPlaybackDelegate_")
@protocol videoPlaybackDelegate <NSObject>
@optional
/// important:
///
/// Delgate method - called when video player started playback
/// remark:
///
/// Use this method to perform anything after video has started
/// \param timestamp Current timestamp from where video has started
///
- (void)videoStartedWithTimestamp:(double)timestamp playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when video player is finished
/// remark:
///
/// Use this method to perform anything after video is finished
- (void)videoFinishedWithPlayerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when video player is paused
/// remark:
///
/// Use this method to perform anything when video is paused
/// \param timestamp Current timestamp when video is paused
///
- (void)videoPauseWithTimestamp:(double)timestamp playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when video player is resumed
/// remark:
///
/// Use this method to perform anything when video resumes from a position
/// \param timestamp Current timestamp when video is resumed
///
- (void)videoResumeWithTimestamp:(double)timestamp playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when video player playback reaches to time divisible by progress interval provided and default by 30 seconds
/// remark:
///
/// Use this method to update video progress, sync with your server APIs
/// \param currentTime Current time of video player (Current Progress)
///
/// \param totalTime Total time of video
///
- (void)videoPlayerUpdateByProgressInterveralWithCurrentTime:(double)currentTime totalTime:(double)totalTime playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when on every second
/// remark:
///
/// Use this method to any action to be performed every second.
/// \param currentTime Current time of video player (Current Progress)
///
/// \param totalTime Total time of video
///
- (void)videoPlayerProgressByEverySecondWithCurrentTime:(double)currentTime totalTime:(double)totalTime playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when video player failed to play
/// remark:
///
/// Use this method to perform anything after video player fails
/// \param timestamp Current timestamp when video playback gets error
///
/// \param errorMessage Playback error description message
///
/// \param errorCode Playback error code
///
- (void)videoPlaybackErrorWithCurrentTime:(double)currentTime errorMessage:(NSString * _Nonnull)errorMessage errorCode:(NSString * _Nonnull)errorCode playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when ad Starts
/// <ul>
///   <li>
///     adTag: Ad tag for the ad being played
///   </li>
/// </ul>
/// \param timestamp Current timestamp when ad starts playing
///
- (void)adStartedWithCurrentTime:(double)currentTime adTag:(NSString * _Nullable)adTag playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when ad is resumed
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     timestamp: Current timestamp when ad is resumed
///   </li>
///   <li>
///     adTag: Ad tag for the ad being played
///   </li>
/// </ul>
- (void)adResumedWithCurrentTime:(double)currentTime adTag:(NSString * _Nullable)adTag playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when ad Stops playing
/// <ul>
///   <li>
///     adTag: Ad tag for the ad being played
///   </li>
/// </ul>
/// \param timestamp Current timestamp when ad is stopped
///
- (void)adStoppedWithCurrentTime:(double)currentTime adTag:(NSString * _Nullable)adTag playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when ad is paused
/// <ul>
///   <li>
///     adTag: Ad tag for the ad being played
///   </li>
/// </ul>
/// \param timestamp Current timestamp when ad is paused
///
- (void)adPausedWithCurrentTime:(double)currentTime adTag:(NSString * _Nullable)adTag playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when ad is finished
/// <ul>
///   <li>
///     adTag: Ad tag for the ad being played
///   </li>
/// </ul>
/// \param timestamp Current timestamp when ad is finished
///
- (void)adFinishedWithCurrentTime:(double)currentTime adTag:(NSString * _Nullable)adTag playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when error comes in ads
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     timestamp: Current timestamp when error comes in ads
///   </li>
///   <li>
///     adTag: Ad tag for the ad being played
///   </li>
///   <li>
///     errorMessage: Error message while loading ad
///   </li>
/// </ul>
- (void)adErrorWithCurrentTime:(double)currentTime adTag:(NSString * _Nullable)adTag errorMessage:(NSString * _Nullable)errorMessage playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when fullscreen mode is changed
/// \param timestamp Current timestamp when fullscreen mode is changed
///
/// \param isFullScreen Bool value (Yes if player is in fullscreen, No For small screen player)
///
- (void)onFullScreenChangeWithCurrentTime:(double)currentTime isFullScreen:(BOOL)isFullScreen playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when remote Menu press on small screen
- (void)onBackButtonTapped;
/// important:
///
/// Delgate method - called when video is seeked
/// \param timestamp Current timestamp when video is seeked
///
- (void)onSeekWithCurrentTime:(double)currentTime playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when video is buffering
/// \param timestamp Current timestamp when video starts buffering
///
- (void)onBufferWithCurrentTime:(double)currentTime playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - called when error occurs while fetching video content from server
/// \param error Error while fetching video
///
/// \param playerTag Tag of video player instance
///
- (void)videoFetchErrorWithError:(VLError * _Nullable)error playerTag:(NSString * _Nullable)playerTag contentResponse:(NSDictionary<NSString *, id> * _Nullable)contentResponse;
/// important:
///
/// Delgate method - called when Pip setup is completed
- (void)pictureInPictureSetupCompletedWithIsPIPSelected:(BOOL)isPIPSelected;
/// important:
///
/// Delgate method - called when Picture in Picture will start
- (void)pictureInPictureWillStart;
/// important:
///
/// Delgate method - called when Picture in Picture did start
- (void)pictureInPictureDidStart;
/// important:
///
/// Delgate method - called when Picture in Picture will restore Full screen playback
- (void)pictureInPictureRestoreFullPlayer;
/// important:
///
/// Delgate method - called when Picture in Picture will stop
- (void)pictureInPictureWillStop;
/// important:
///
/// Delgate method - called when Picture in Picture did stop
- (void)pictureInPictureDidStop;
/// important:
///
/// Delgate method - called when Picture in Picture did fail to start with error
/// \param error Error for Picture in Picture start failure
///
/// \param playerTag Tag of video player instance
///
- (void)pictureInPictureDidFailedToStartWithError:(VLError * _Nonnull)error playerTag:(NSString * _Nonnull)playerTag;
/// important:
///
/// Delgate method - Called when loading started/stopped
/// \param isLoading To tell if loader need to be start or stop
///
- (void)onLoadingChangedWithIsLoading:(BOOL)isLoading;
/// important:
///
/// Delgate method - Called when subtitle is available or not.
/// \param isEmbedded To tell if subtitle is embedded or not
///
- (void)isSubtitlesEmbeddedInUrlChangedWithIsEmbedded:(BOOL)isEmbedded;
/// important:
///
/// Delgate method - Called when player changes bitrate
/// \param logString Detailed log string of changes in bitrate
///
- (void)playerBitrateDebugLogsWithLogString:(NSString * _Nonnull)logString;
/// important:
///
/// Delgate method - Called when next video playback UI is displayed
- (void)autoPlayUIInitiated;
/// important:
///
/// Delgate method - Called when next video playback UI is dismissed
/// \param isPlayingNextContent Tell is next content is playing or user has cancelled playback for next video
///
- (void)autoPlayUIDimissedWithIsPlayingNextContent:(BOOL)isPlayingNextContent;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
