// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import CoreGraphics;
@import UIKit;
@import Dispatch;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class ScreenMeet;
@class NSDictionary;
enum CallStatus : NSInteger;
@class MeetingConfig;

SWIFT_CLASS("_TtC13ScreenMeetSDK13BackendClient")
@interface BackendClient : NSObject
+ (ScreenMeet * _Null_unspecified)root;
+ (void)setRoot:(ScreenMeet * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)user;
+ (void)setUser:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)plan;
+ (void)setPlan:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)subscription;
+ (void)setSubscription:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)room;
+ (void)setRoom:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)inviteText;
+ (void)setInviteText:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)endpointInfo;
+ (void)setEndpointInfo:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)webConfig;
+ (void)setWebConfig:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)plans;
+ (void)setPlans:(NSDictionary * _Null_unspecified)value;
+ (NSDictionary * _Null_unspecified)meetingStopInfo;
+ (void)setMeetingStopInfo:(NSDictionary * _Null_unspecified)value;
+ (NSString * _Nonnull)baseUrl;
+ (void)loginUser:(NSString * _Null_unspecified)login password:(NSString * _Null_unspecified)password bearer:(NSString * _Null_unspecified)bearer callback:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)logout;
+ (void)loginUserWithGoogle:(NSString * _Nonnull)googleToken callback:(void (^ _Nonnull)(NSString * _Null_unspecified email, enum CallStatus status))callback;
+ (void)getInviteText:(MeetingConfig * _Nonnull)conf callback:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)updateProfile:(NSString * _Null_unspecified)email name:(NSString * _Null_unspecified)name password:(NSString * _Null_unspecified)password callback:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)setRoomName:(NSString * _Nonnull)roomName callback:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)discoverEndpoint:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)getWebsiteConfig;
+ (void)getPlans:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)activatePlan:(NSString * _Nonnull)sku transactionId:(NSString * _Nonnull)transactionId receiptB64:(NSString * _Nonnull)receiptB64 callback:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)registerUser:(NSString * _Nonnull)name email:(NSString * _Nonnull)email password:(NSString * _Nonnull)password callback:(void (^ _Nonnull)(enum CallStatus status))callback;
+ (void)sendPostRequest:(NSString * _Nonnull)url params:(NSDictionary<NSString *, NSObject *> * _Nonnull)params callback:(void (^ _Nonnull)(NSDictionary * _Null_unspecified json, enum CallStatus status))callback;
+ (void)sendGetRequest:(NSString * _Nonnull)url callback:(void (^ _Nonnull)(NSDictionary * _Null_unspecified json, enum CallStatus status))callback;
+ (NSString * _Nonnull)appVersion;
+ (NSString * _Nonnull)udid;
+ (NSString * _Nonnull)deviceName;
+ (NSString * _Nonnull)currentTime;
+ (void)addBrowserEvent:(NSString * _Nonnull)url;
+ (void)initAnalyticSender;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Background operation status
///
/// <ul><li>SUCCESS: Operation finished with success</li><li>ALREADY_HAS_ACCOUNT: User already has account</li><li>INVALID_EMAIL: Invalid e-mail address</li><li>DUPLICATE_EMAIL: Duplicate e-mail address</li><li>INVALID_ROOM_NAME: Invalid room name (eg, illegal characters)</li><li>DUPLICATE_ROOM_NAME: Duplicate room name (name is already taken)</li><li>STREAM_ALREADY_STARTED: Stream is already started</li><li>INVALID_API_KEY: Invalid API key</li><li>AUTH_ERROR: Authentication error (invalid user auth)</li><li>NETWORK_ERROR: Unexpected server communication error (network issues, API server issue, etc)</li><li>INVALID_SUBSCRIPTION: Invalid subscription (user needs to purchase ScreenMeet subscription)</li></ul>
typedef SWIFT_ENUM(NSInteger, CallStatus) {

/// Operation finished with success
  CallStatusSUCCESS = 0,

/// User already has account
  CallStatusALREADY_HAS_ACCOUNT = 1,

/// Invalid e-mail address
  CallStatusINVALID_EMAIL = 2,

/// Duplicate e-mail address
  CallStatusDUPLICATE_EMAIL = 3,

/// Invalid room name (eg, illegal characters)
  CallStatusINVALID_ROOM_NAME = 4,

/// Duplicate room name (name is already taken)
  CallStatusDUPLICATE_ROOM_NAME = 5,

/// Stream is already started
  CallStatusSTREAM_ALREADY_STARTED = 6,

/// Invalid API key
  CallStatusINVALID_API_KEY = 7,

/// Authentication error (invalid user auth)
  CallStatusAUTH_ERROR = 8,

/// Unexpected server communication error (network issues, API server issue, etc)
  CallStatusNETWORK_ERROR = 9,

/// Invalid subscription (user needs to purchase ScreenMeet subscription)
  CallStatusINVALID_SUBSCRIPTION = 10,
};


/// Environment used for streaming.
///
/// <ul><li>SANDBOX: Used for testing applicaton.</li><li>PRODUCTION: Used for final applicaton.</li></ul>
typedef SWIFT_ENUM(NSInteger, EnvironmentType) {

/// Used for testing applicaton.
  EnvironmentTypeSANDBOX = 0,

/// Used for final applicaton
  EnvironmentTypePRODUCTION = 1,
};



/// ScreenMeet stream configuration
SWIFT_CLASS("_TtC13ScreenMeetSDK13MeetingConfig")
@interface MeetingConfig : NSObject

/// Password to join stream. Nil is no rassword required
@property (nonatomic, readonly, copy) NSString * _Null_unspecified password;

/// Ask for viewer name before join the stream
@property (nonatomic, readonly) BOOL askForName;
- (nonnull instancetype)initWithPassword:(NSString * _Null_unspecified)password askForName:(BOOL)askForName OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDictionary (SWIFT_EXTENSION(ScreenMeetSDK))
@end

@class SocketService;
@class UIView;
@class UIImage;
enum StreamStateType : NSInteger;
@class ScreenMeetViewer;
enum StreamStateChangedReason : NSInteger;


/// Main ScreenMeet class to work with ScreenMeet SDK
SWIFT_CLASS("_TtC13ScreenMeetSDK10ScreenMeet")
@interface ScreenMeet : NSObject

/// Initialize shared instance of ScreenMeet
///
/// \param apiKey A string idetifier of application that uses ScreenMeet
///
/// \param environment Enum [SANDBOX or PRODUCTION]. Defualt is SANDBOX
+ (void)initSharedInstance:(NSString * _Nonnull)apiKey environment:(enum EnvironmentType)environment;

/// \returns  Shared instance of ScreenMeet
+ (ScreenMeet * _Null_unspecified)sharedInstance;
@property (nonatomic, readonly, strong) SocketService * _Nonnull socketService;

/// Initializes a new ScreenMeet with the provided apiKey and environment.
///
/// \param apiKey A string idetifier of application that uses ScreenMeet
///
/// \param environment Enum [SANDBOX or PRODUCTION]. Defualt is SANDBOX
///
/// \returns  New ScreenMeet instance
- (nonnull instancetype)initWithApiKey:(NSString * _Nonnull)apiKey environment:(enum EnvironmentType)environment OBJC_DESIGNATED_INITIALIZER;

/// Authenticate the user with either a username/password. It returns a success or failure state to the callback.
///
/// \param username Username
///
/// \param password Password
///
/// \param callback Is called when operation is finished with result in status variable
- (void)authenticate:(NSString * _Nonnull)username password:(NSString * _Nonnull)password callback:(void (^ _Nonnull)(enum CallStatus status))callback;

/// Authenticate the user with a bearer token. It will return a success or failure state to the callback.
///
/// \param bearerToken Bearer token
///
/// \param callback Is called when operation is finished with result in status variable
- (void)authenticate:(NSString * _Nonnull)bearerToken callback:(void (^ _Nonnull)(enum CallStatus status))callback;

/// \returns  Bearer token of authenticated user or nil is user is not authenticated
- (NSString * _Null_unspecified)getBearerToken;

/// Create user with specified username and password
///
/// \param username Username of user
///
/// \param password Password of user
///
/// \param callback Is called when operation is finished with result in status variable
- (void)createUser:(NSString * _Nonnull)email username:(NSString * _Nonnull)username password:(NSString * _Nonnull)password callback:(void (^ _Nonnull)(enum CallStatus status))callback;

/// Update user profile: email, username, password. User must be authenticated, otherwise an error will be produced. Please note that if the password is changed, the bearer token will be updated.
///
/// \param email New email value. Use nil in case you dont need to update email value.
///
/// \param username New username value. Use nil in case you dont need to update username value.
///
/// \param password New password value. Use nil in case you dont need to update password value.
///
/// \param callback Is called when operation is finished with result in status variable
- (void)updateUser:(NSString * _Null_unspecified)email username:(NSString * _Null_unspecified)username password:(NSString * _Null_unspecified)password callback:(void (^ _Nonnull)(enum CallStatus status))callback;

/// \returns  Is user authenticated
- (BOOL)isUserLoggedIn;

/// Logout user. If current stream is in progress stops stream.
- (void)logoutUser;

/// Return ScreenMeet URL to reset password of user by email
///
/// \param email Email to reset password
///
/// \returns  Url to reset password of user
- (NSString * _Nonnull)getResetPasswordURL:(NSString * _Nonnull)email;

/// \returns  ScreenMeet room name of the user. User must be authenticated.
- (NSString * _Null_unspecified)getRoomName;

/// \returns  Unique User identifier
- (NSString * _Null_unspecified)getUserId;

/// \returns  Username of authenticated user
- (NSString * _Null_unspecified)getUserName;

/// \returns  Email of authenticated user
- (NSString * _Null_unspecified)getUserEmail;

/// Update the user’s Room name. Alpha-numeric only.
///
/// \param roomName New root name
///
/// \param callback Is called when operation is finished with result in status variable
- (void)setRoomName:(NSString * _Nonnull)roomName callback:(void (^ _Nonnull)(enum CallStatus status))callback;

/// Returns the fully qualified ScreenMeet room URL for the user’s meetings. User must be authenticated
///
/// \param config Screen share config
///
/// \param callback Is called when operation is finished with result in roomUrl and status variables
- (NSString * _Null_unspecified)getRoomUrl;

/// Shows share invite link dialog. Allows you to present a popover from a rect in a particular view. arrowDirections is a bitfield which specifies what arrow directions are allowed when laying out the popover; for most uses, UIPopoverArrowDirectionAny is sufficient.
- (void)showInviteMeetingLinkDialog:(CGRect)rect inView:(UIView * _Nonnull)inView arrowDirections:(UIPopoverArrowDirection)arrowDirections animated:(BOOL)animated;
- (void)setMeetingConfig:(NSString * _Null_unspecified)password askForName:(BOOL)askForName callback:(void (^ _Nonnull)(enum CallStatus status))callback;
- (void)setMeetingConfig:(MeetingConfig * _Nonnull)config callback:(void (^ _Nonnull)(enum CallStatus status))callback;
- (MeetingConfig * _Nonnull)getMeetingConfig;

/// Initiate a stream to the user’s room. If successfully started, content of view is now being streamed.
///
/// <ul><li>Parameters:</li><li>callback: Is called when operation is finished with result in status variables</li></ul>
- (void)startStream:(void (^ _Nonnull)(enum CallStatus status))callback;

/// Set UIView source object. Use 'nil' to do full screen capturing
///
/// <ul><li>Parameters:</li><li>source: UIView that will be used to share</li></ul>
- (void)setStreamSource:(UIView * _Null_unspecified)newSource;

/// Set UIImage source object. Use 'nil' to do screen capturing
///
/// <ul><li>Parameters:</li><li>source: UIImage that will be used to share</li></ul>
- (void)setStreamImage:(UIImage * _Null_unspecified)image;

/// Pause the active stream. Keeps the meeting open but stops the capturing/streaming.
- (void)pauseStream;

/// Resume a paused stream
- (void)resumeStream;

/// Ends the current screen sharing session
- (void)stopStream;

/// \returns  Current stream state [ACTIVE, PAUSED, STOPPED]
- (enum StreamStateType)getStreamState;

/// \returns  count of viewers in the user’s room
- (NSInteger)getViewerCount;

/// \returns  Array of joined viewers
- (NSArray<ScreenMeetViewer *> * _Nonnull)getViewers;

/// Kick viewer from stream
///
/// \param id ID of viewer to kick
- (void)kickViewer:(NSString * _Nonnull)id;

/// Set image quality of stream. An integer from 1-100. This sets the compression quality level of the stream, where 1 will use the highest compression possible and result in lower quality and lower bandwidth consumption, while 100 will result in higher quality but more bandwidth consumption. Default is 50.
///
/// <ul><li>Parameter<ul><li>quality: Image quality</li></ul></li></ul>
- (void)setQuality:(NSInteger)quality;

/// \returns  Image quality of stream
- (NSInteger)getQuality;

/// Set on viewer joins handler. Use nil to remove handler
///
/// \param callback Is called when new viewer joins stream
- (void)onViewerJoined:(void (^ _Null_unspecified)(ScreenMeetViewer * _Nonnull viewer))callback;

/// Set on viewer lefts handler. Use nil to remove handler
///
/// \param callback Is called when new viewer lefts stream
- (void)onViewerLeft:(void (^ _Null_unspecified)(ScreenMeetViewer * _Nonnull viewer))callback;

/// Set on stream state changed handler. Use nil to remove handler
///
/// \param callback Is called when stream status is changed with reason
- (void)onStreamStateChanged:(void (^ _Null_unspecified)(enum StreamStateType newState, enum StreamStateChangedReason reason))callback;

/// Set image processor to change image before send it stream. Use nil to remove handler. Processor should return new image that will be sent to stream
///
/// \param callback Is called when new frame image appears before send it to stream.
- (void)setImageProcessor:(UIImage * _Nonnull (^ _Null_unspecified)(UIImage * _Nonnull sourceImage))processor;
@end



/// ScreenMeet viewer model
SWIFT_CLASS("_TtC13ScreenMeetSDK16ScreenMeetViewer")
@interface ScreenMeetViewer : NSObject

/// identifier of the viewer
@property (nonatomic, readonly, copy) NSString * _Nonnull id;

/// name of the viewer
@property (nonatomic, readonly, copy) NSString * _Nonnull name;

/// The delay, in seconds, of how long it’s taking the user’s stream to reach the viewer
@property (nonatomic, readonly) double latency;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id name:(NSString * _Nonnull)name latency:(double)latency OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13ScreenMeetSDK16SocketAckEmitter")
@interface SocketAckEmitter : NSObject
- (void)with:(NSArray * _Nonnull)items;
@end

@class NSArray;

SWIFT_CLASS("_TtC13ScreenMeetSDK14SocketAnyEvent")
@interface SocketAnyEvent : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull event;
@property (nonatomic, readonly, strong) NSArray * _Nullable items;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

@protocol SocketEngineClient;
@class NSHTTPCookie;
@class NSURL;
@class NSData;
enum SocketEnginePacketType : NSInteger;

SWIFT_PROTOCOL("_TtP13ScreenMeetSDK16SocketEngineSpec_")
@protocol SocketEngineSpec
@property (nonatomic, weak) id <SocketEngineClient> _Nullable client;
@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable connectParams;
@property (nonatomic, readonly) BOOL doubleEncodeUTF8;
@property (nonatomic, readonly, copy) NSArray<NSHTTPCookie *> * _Nullable cookies;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nullable extraHeaders;
@property (nonatomic, readonly) BOOL fastUpgrade;
@property (nonatomic, readonly) BOOL forcePolling;
@property (nonatomic, readonly) BOOL forceWebsockets;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified parseQueue;
@property (nonatomic, readonly) BOOL polling;
@property (nonatomic, readonly) BOOL probing;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified emitQueue;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified handleQueue;
@property (nonatomic, readonly, copy) NSString * _Nonnull sid;
@property (nonatomic, readonly, copy) NSString * _Nonnull socketPath;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlPolling;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlWebSocket;
@property (nonatomic, readonly) BOOL websocket;
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> _Nonnull)client url:(NSURL * _Nonnull)url options:(NSDictionary * _Nullable)options;
- (void)connect;
- (void)didError:(NSString * _Nonnull)error;
- (void)disconnect:(NSString * _Nonnull)reason;
- (void)doFastUpgrade;
- (void)flushWaitingForPostToWebSocket;
- (void)parseEngineData:(NSData * _Nonnull)data;
- (void)parseEngineMessage:(NSString * _Nonnull)message fromPolling:(BOOL)fromPolling;
- (void)write:(NSString * _Nonnull)msg withType:(enum SocketEnginePacketType)type withData:(NSArray<NSData *> * _Nonnull)data;
@end

@class NSURLSession;
@class WebSocket;
@class NSError;

SWIFT_CLASS("_TtC13ScreenMeetSDK12SocketEngine")
@interface SocketEngine : NSObject <SocketEngineSpec>
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified emitQueue;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified handleQueue;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified parseQueue;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable connectParams;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull postWait;
@property (nonatomic) BOOL waitingForPoll;
@property (nonatomic) BOOL waitingForPost;
@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic, readonly, copy) NSArray<NSHTTPCookie *> * _Nullable cookies;
@property (nonatomic, readonly) BOOL doubleEncodeUTF8;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nullable extraHeaders;
@property (nonatomic, readonly) BOOL fastUpgrade;
@property (nonatomic, readonly) BOOL forcePolling;
@property (nonatomic, readonly) BOOL forceWebsockets;
@property (nonatomic, readonly) BOOL invalidated;
@property (nonatomic, readonly) BOOL polling;
@property (nonatomic, readonly) BOOL probing;
@property (nonatomic, readonly, strong) NSURLSession * _Nullable session;
@property (nonatomic, readonly, copy) NSString * _Nonnull sid;
@property (nonatomic, readonly, copy) NSString * _Nonnull socketPath;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlPolling;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlWebSocket;
@property (nonatomic, readonly) BOOL websocket;
@property (nonatomic, readonly, strong) WebSocket * _Nullable ws;
@property (nonatomic, weak) id <SocketEngineClient> _Nullable client;
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> _Nonnull)client url:(NSURL * _Nonnull)url options:(NSDictionary * _Nullable)options;

/// Starts the connection to the server
- (void)connect;
- (void)didError:(NSString * _Nonnull)error;
- (void)disconnect:(NSString * _Nonnull)reason;
- (void)doFastUpgrade;
- (void)flushWaitingForPostToWebSocket;
- (void)parseEngineData:(NSData * _Nonnull)data;
- (void)parseEngineMessage:(NSString * _Nonnull)message fromPolling:(BOOL)fromPolling;

/// Write a message, independent of transport.
- (void)write:(NSString * _Nonnull)msg withType:(enum SocketEnginePacketType)type withData:(NSArray<NSData *> * _Nonnull)data;
- (void)websocketDidConnect:(WebSocket * _Nonnull)socket;
- (void)websocketDidDisconnect:(WebSocket * _Nonnull)socket error:(NSError * _Nullable)error;
@end


SWIFT_PROTOCOL("_TtP13ScreenMeetSDK18SocketEngineClient_")
@protocol SocketEngineClient
- (void)engineDidError:(NSString * _Nonnull)reason;
- (void)engineDidClose:(NSString * _Nonnull)reason;
@optional
- (void)engineDidOpen:(NSString * _Nonnull)reason;
@required
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;
@end

typedef SWIFT_ENUM(NSInteger, SocketEnginePacketType) {
  SocketEnginePacketTypeOpen = 0,
  SocketEnginePacketTypeClose = 1,
  SocketEnginePacketTypePing = 2,
  SocketEnginePacketTypePong = 3,
  SocketEnginePacketTypeMessage = 4,
  SocketEnginePacketTypeUpgrade = 5,
  SocketEnginePacketTypeNoop = 6,
};


enum SocketIOClientStatus : NSInteger;
@class NSUUID;

SWIFT_CLASS("_TtC13ScreenMeetSDK14SocketIOClient")
@interface SocketIOClient : NSObject <SocketEngineClient>
@property (nonatomic, readonly, strong) NSURL * _Nonnull socketURL;
@property (nonatomic, readonly, strong) id <SocketEngineSpec> _Nullable engine;
@property (nonatomic, readonly) enum SocketIOClientStatus status;
@property (nonatomic) BOOL forceNew;
@property (nonatomic, copy) NSString * _Nonnull nsp;
@property (nonatomic) BOOL reconnects;
@property (nonatomic) NSInteger reconnectWait;
@property (nonatomic, readonly, copy) NSString * _Nullable sid;

/// Not so type safe way to create a SocketIOClient, meant for Objective-C compatiblity. If using Swift it's recommended to use init(socketURL: NSURL, options: Set<SocketIOClientOption>)
- (nonnull instancetype)initWithSocketURL:(NSURL * _Nonnull)socketURL options:(NSDictionary * _Nullable)options;

/// Connect to the server.
- (void)connect;

/// Connect to the server. If we aren't connected after timeoutAfter, call handler
- (void)connectWithTimeoutAfter:(NSInteger)timeoutAfter withTimeoutHandler:(void (^ _Nullable)(void))handler;

/// Disconnects the socket. Only reconnect the same socket if you know what you're doing. Will turn off automatic reconnects.
- (void)disconnect;

/// Same as emit, but meant for Objective-C
- (void)emit:(NSString * _Nonnull)event withItems:(NSArray * _Nonnull)items;

/// Same as emitWithAck, but for Objective-C
- (void (^ _Nonnull)(uint64_t timeoutAfter, void (^ _Nonnull callback)(NSArray * _Nonnull)))emitWithAck:(NSString * _Nonnull)event withItems:(NSArray * _Nonnull)items;
- (void)engineDidClose:(NSString * _Nonnull)reason;

/// error
- (void)engineDidError:(NSString * _Nonnull)reason;

/// Causes an event to be handled. Only use if you know what you're doing.
- (void)handleEvent:(NSString * _Nonnull)event data:(NSArray * _Nonnull)data isInternalMessage:(BOOL)isInternalMessage withAck:(NSInteger)ack;

/// Leaves nsp and goes back to /
- (void)leaveNamespace;

/// Joins namespace
- (void)joinNamespace:(NSString * _Nonnull)namespace_;

/// Removes handler(s) based on name
- (void)off:(NSString * _Nonnull)event;

/// Removes a handler with the specified UUID gotten from an on or once
- (void)offWithId:(NSUUID * _Nonnull)id;

/// Adds a handler for an event. Returns: A unique id for the handler
- (NSUUID * _Nonnull)on:(NSString * _Nonnull)event callback:(void (^ _Nonnull)(NSArray * _Nonnull, SocketAckEmitter * _Nonnull))callback;

/// Adds a single-use handler for an event. Returns: A unique id for the handler
- (NSUUID * _Nonnull)once:(NSString * _Nonnull)event callback:(void (^ _Nonnull)(NSArray * _Nonnull, SocketAckEmitter * _Nonnull))callback;

/// Adds a handler that will be called on every event.
- (void)onAny:(void (^ _Nonnull)(SocketAnyEvent * _Nonnull))handler;
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;

/// Tries to reconnect to the server.
- (void)reconnect;

/// Removes all handlers. Can be used after disconnecting to break any potential remaining retain cycles.
- (void)removeAllHandlers;
@end


@interface SocketIOClient (SWIFT_EXTENSION(ScreenMeetSDK))
@end

typedef SWIFT_ENUM(NSInteger, SocketIOClientStatus) {
  SocketIOClientStatusNotConnected = 0,
  SocketIOClientStatusClosed = 1,
  SocketIOClientStatusConnecting = 2,
  SocketIOClientStatusConnected = 3,
};

@class NSTimer;

SWIFT_CLASS("_TtC13ScreenMeetSDK13SocketService")
@interface SocketService : NSObject
@property (nonatomic) BOOL screenSharingEnabled;
@property (nonatomic) BOOL readyToSendScreenshot;
@property (nonatomic, strong) SocketIOClient * _Null_unspecified socket;
@property (nonatomic, strong) NSTimer * _Null_unspecified screenshotTimer;
@property (nonatomic, copy) NSString * _Nonnull socketId;
@property (nonatomic, copy) NSArray<NSDictionary *> * _Nonnull attendeeList;
@property (nonatomic, readonly) double screenshotInterval;
@property (nonatomic) double lastScreenshotTime;
@property (nonatomic) double lastLatencyCheckTime;
@property (nonatomic) BOOL isPaused;
@property (nonatomic, strong) MeetingConfig * _Nonnull streamConfig;
- (void)finishSocketInitializing;
- (void)setConfig:(MeetingConfig * _Nonnull)config callback:(void (^ _Nonnull)(enum CallStatus status))callback;
- (void)startScreenSharing:(void (^ _Nonnull)(enum CallStatus status))callback;
- (void)stopScreenSharing;
- (void)setStreamSource:(UIView * _Null_unspecified)newSource;
- (void)initSocket;
- (void)addAttendee:(NSDictionary * _Nonnull)attendee;
- (void)reconnect;
- (void)onStartStreamTimeout;
- (void)makeScreenShot;
- (void)disconnectSocket;
- (void)kickAttendee:(NSString * _Nonnull)attendeeId;
+ (NSString * _Nonnull)generateRandomNumber:(NSInteger)numDigits;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Disconnection reason
///
/// <ul><li>API_CALL: Direct API call</li><li>SERVER_ERROR: Unexpected server error</li><li>NETWORK_ERROR: Network connection lost</li><li>STARTED_ON_OTHER_DEVICE: Stream started from another device</li></ul>
typedef SWIFT_ENUM(NSInteger, StreamStateChangedReason) {

/// API call
  StreamStateChangedReasonAPI_CALL = 0,

/// Unexpected server error
  StreamStateChangedReasonSERVER_ERROR = 1,

/// Network connection lost
  StreamStateChangedReasonNETWORK_ERROR = 2,

/// Stream started from another device
  StreamStateChangedReasonSTARTED_ON_OTHER_DEVICE = 3,
};


/// Stream state
///
/// <ul><li>ACTIVE: Stream is active</li><li>PAUSED: Stream is paused</li><li>STOPPED: Stream is stopped</li></ul>
typedef SWIFT_ENUM(NSInteger, StreamStateType) {

/// Stream is active
  StreamStateTypeACTIVE = 0,

/// Stream is paused
  StreamStateTypePAUSED = 1,

/// Stream is stopped
  StreamStateTypeSTOPPED = 2,
};


@interface UIDevice (SWIFT_EXTENSION(ScreenMeetSDK))
@property (nonatomic, readonly, copy) NSString * _Nonnull modelName;
@end

@class NSStream;

SWIFT_CLASS("_TtC13ScreenMeetSDK9WebSocket")
@interface WebSocket : NSObject <NSStreamDelegate>
+ (NSString * _Nonnull)ErrorDomain;
@property (nonatomic, strong) dispatch_queue_t _Null_unspecified queue;
@property (nonatomic, copy) void (^ _Nullable onConnect)(void);
@property (nonatomic, copy) void (^ _Nullable onDisconnect)(NSError * _Nullable);
@property (nonatomic, copy) void (^ _Nullable onText)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onData)(NSData * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onPong)(void);
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic) BOOL voipEnabled;
@property (nonatomic) BOOL selfSignedSSL;
@property (nonatomic, copy) NSString * _Nullable origin;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly, strong) NSURL * _Nonnull currentURL;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url protocols:(NSArray<NSString *> * _Nullable)protocols OBJC_DESIGNATED_INITIALIZER;

/// Connect to the websocket server on a background thread
- (void)connect;

/// Write a string to the websocket. This sends it as a text frame.
///
/// If you supply a non-nil completion block, I will perform it when the write completes.
///
/// \param str The string to write.
///
/// \param completion The (optional) completion handler.
- (void)writeString:(NSString * _Nonnull)str completion:(void (^ _Nullable)(void))completion;

/// Write binary data to the websocket. This sends it as a binary frame.
///
/// If you supply a non-nil completion block, I will perform it when the write completes.
///
/// \param data The data to write.
///
/// \param completion The (optional) completion handler.
- (void)writeData:(NSData * _Nonnull)data completion:(void (^ _Nullable)(void))completion;
- (void)writePing:(NSData * _Nonnull)data completion:(void (^ _Nullable)(void))completion;
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end

#pragma clang diagnostic pop
