// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SolvvySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum ContactType : NSInteger;
@class UIImage;

SWIFT_PROTOCOL("_TtP9SolvvySDK13SupportOption_")
@protocol SupportOption
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) enum ContactType type;
@property (nonatomic, copy) NSString * _Nonnull desc;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nonnull buttonText;
@end


SWIFT_CLASS("_TtC9SolvvySDK10ChatOption")
@interface ChatOption : NSObject <SupportOption>
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) enum ContactType type;
@property (nonatomic, copy) NSString * _Nonnull desc;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nonnull buttonText;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name description:(NSString * _Nonnull)description;
@end


SWIFT_CLASS("_TtC9SolvvySDK15CommunityOption")
@interface CommunityOption : NSObject <SupportOption>
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) enum ContactType type;
@property (nonatomic, copy) NSString * _Nullable communityLink;
@property (nonatomic, copy) NSString * _Nonnull desc;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nonnull buttonText;
- (nonnull instancetype)initWithCommunityLink:(NSString * _Nonnull)communityLink OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ContactType, open) {
  ContactTypeEmail = 0,
  ContactTypeChat = 1,
  ContactTypeCommunity = 2,
  ContactTypePhone = 3,
  ContactTypeCustom = 4,
};


SWIFT_CLASS("_TtC9SolvvySDK19CustomContactOption")
@interface CustomContactOption : NSObject <SupportOption>
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) enum ContactType type;
@property (nonatomic, copy) NSString * _Nonnull desc;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nonnull buttonText;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name description:(NSString * _Nonnull)description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9SolvvySDK11EmailOption")
@interface EmailOption : NSObject <SupportOption>
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) enum ContactType type;
@property (nonatomic, copy) NSString * _Nonnull desc;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nonnull buttonText;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name description:(NSString * _Nonnull)description;
@end

@class PreContactForm;
@class PreQuestionForm;

SWIFT_CLASS("_TtC9SolvvySDK12FormSettings")
@interface FormSettings : NSObject
@property (nonatomic, strong) PreContactForm * _Nonnull preContactForm;
@property (nonatomic, strong) PreQuestionForm * _Nonnull preQuestionForm;
@property (nonatomic) BOOL userSelectsForm;
@property (nonatomic) BOOL allowAttachments;
@property (nonatomic) BOOL requireCaptcha;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull initialContext;
@property (nonatomic, copy) NSString * _Nullable customTicketFormId;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull hidePropertyList;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC9SolvvySDK7Persona")
@interface Persona : NSObject
@property (nonatomic) NSInteger orgId;
@property (nonatomic, copy) NSString * _Nonnull apiKey;
@property (nonatomic, copy) NSString * _Nonnull connectorId;
@property (nonatomic, copy) NSString * _Nullable buttonText;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithOrganisationId:(NSInteger)orgId apiKey:(NSString * _Nonnull)apiKey connectorIdForTicketCreation:(NSString * _Nonnull)connectorId buttonText:(NSString * _Nullable)buttonText OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9SolvvySDK15PhoneCallOption")
@interface PhoneCallOption : NSObject <SupportOption>
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) enum ContactType type;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
@property (nonatomic, copy) NSString * _Nonnull desc;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nonnull buttonText;
- (nonnull instancetype)initWithPhoneNumber:(NSString * _Nonnull)phoneNumber OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name description:(NSString * _Nonnull)description phoneNumber:(NSString * _Nonnull)phoneNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP9SolvvySDK7PreForm_")
@protocol PreForm
@property (nonatomic) BOOL show;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull fieldIdWhitelist;
@property (nonatomic, copy) NSString * _Nullable instructionText;
@end


SWIFT_CLASS("_TtC9SolvvySDK14PreContactForm")
@interface PreContactForm : NSObject <PreForm>
@property (nonatomic) BOOL show;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull fieldIdWhitelist;
@property (nonatomic, copy) NSString * _Nullable instructionText;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithShow:(BOOL)show fieldIdWhitelist:(NSArray<NSString *> * _Nonnull)fieldIdWhitelist instructionText:(NSString * _Nullable)instructionText OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9SolvvySDK15PreQuestionForm")
@interface PreQuestionForm : NSObject <PreForm>
@property (nonatomic) BOOL show;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull fieldIdWhitelist;
@property (nonatomic, copy) NSString * _Nullable instructionText;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithShow:(BOOL)show fieldIdWhitelist:(NSArray<NSString *> * _Nonnull)fieldIdWhitelist instructionText:(NSString * _Nullable)instructionText OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

SWIFT_CLASS("_TtC9SolvvySDK16SolvvyAppearance")
@interface SolvvyAppearance : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithBackgroundColor:(UIColor * _Nonnull)backgroundColor progressBarColor:(UIColor * _Nonnull)progressBarColor themeColor:(UIColor * _Nonnull)themeColor fontFamilyName:(NSString * _Nullable)fontName navigationBarFontColor:(UIColor * _Nonnull)navigationBarFontColor error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (void)setNavigationBarTextColorWithColor:(UIColor * _Nonnull)color;
@end


SWIFT_CLASS("_TtC9SolvvySDK12SolvvyParams")
@interface SolvvyParams : NSObject
@property (nonatomic, copy) NSArray<Persona *> * _Nonnull personaOptions;
@property (nonatomic, strong) FormSettings * _Nonnull formSettings;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithPersonaOptions:(NSArray<Persona *> * _Nonnull)personaOptions OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithPersonaOptions:(NSArray<Persona *> * _Nonnull)personaOptions withFormSettings:(FormSettings * _Nonnull)formSettings OBJC_DESIGNATED_INITIALIZER;
- (void)setEnvironmentWithIsDevEnvironment:(BOOL)isDevEnvironment;
- (BOOL)setSupportEmailWithEmailId:(NSString * _Nonnull)mailId error:(NSError * _Nullable * _Nullable)error;
@end

@protocol SolvvySDKDelegate;
@class UIViewController;

SWIFT_CLASS("_TtC9SolvvySDK9SolvvySDK")
@interface SolvvySDK : NSObject
@property (nonatomic, weak) id <SolvvySDKDelegate> _Nullable delegate;
/// Initialiser method
/// \param params dictionary of type [String, AnyObject]
///
///
/// throws:
/// throws exception if params doesn’t contain all the required things for SDK initialisation
- (nullable instancetype)initWithParams:(SolvvyParams * _Nonnull)params error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (void)startSolvvyFromViewController:(UIViewController * _Nonnull)viewController withAppearance:(SolvvyAppearance * _Nullable)appearance;
- (void)stopSolvvy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP9SolvvySDK17SolvvySDKDelegate_")
@protocol SolvvySDKDelegate
@optional
- (void)configureChatWithChatOption:(ChatOption * _Nonnull)withChatOption forContext:(NSDictionary<NSString *, id> * _Nonnull)forContext;
- (void)configurePhoneCallWithPhoneCallOption:(PhoneCallOption * _Nonnull)withPhoneCallOption forContext:(NSDictionary<NSString *, id> * _Nonnull)forContext;
- (void)configureCustomContactOptionWithCustomContactOption:(CustomContactOption * _Nonnull)withCustomContactOption forContext:(NSDictionary<NSString *, id> * _Nonnull)forContext;
- (BOOL)showQuestionSearchForContext:(NSDictionary<NSString *, id> * _Nonnull)forContext SWIFT_WARN_UNUSED_RESULT;
- (NSArray<id <SupportOption>> * _Nonnull)getSupportOptionsForContext:(NSDictionary<NSString *, id> * _Nonnull)forContext SWIFT_WARN_UNUSED_RESULT;
@end










#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
