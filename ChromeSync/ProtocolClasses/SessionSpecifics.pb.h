// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class SessionHeader;
@class SessionHeader_Builder;
@class SessionSpecifics;
@class SessionSpecifics_Builder;
@class SessionTab;
@class SessionTab_Builder;
@class SessionWindow;
@class SessionWindow_Builder;
@class TabNavigation;
@class TabNavigation_Builder;
typedef enum {
  SessionHeader_DeviceTypeTypeWin = 1,
  SessionHeader_DeviceTypeTypeMac = 2,
  SessionHeader_DeviceTypeTypeLinux = 3,
  SessionHeader_DeviceTypeTypeCros = 4,
  SessionHeader_DeviceTypeTypeOther = 5,
  SessionHeader_DeviceTypeTypePhone = 6,
  SessionHeader_DeviceTypeTypeTablet = 7,
} SessionHeader_DeviceType;

BOOL SessionHeader_DeviceTypeIsValidValue(SessionHeader_DeviceType value);

typedef enum {
  SessionWindow_BrowserTypeTypeTabbed = 1,
  SessionWindow_BrowserTypeTypePopup = 2,
} SessionWindow_BrowserType;

BOOL SessionWindow_BrowserTypeIsValidValue(SessionWindow_BrowserType value);

typedef enum {
  TabNavigation_PageTransitionLink = 0,
  TabNavigation_PageTransitionTyped = 1,
  TabNavigation_PageTransitionAutoBookmark = 2,
  TabNavigation_PageTransitionAutoSubframe = 3,
  TabNavigation_PageTransitionManualSubframe = 4,
  TabNavigation_PageTransitionGenerated = 5,
  TabNavigation_PageTransitionStartPage = 6,
  TabNavigation_PageTransitionFormSubmit = 7,
  TabNavigation_PageTransitionReload = 8,
  TabNavigation_PageTransitionKeyword = 9,
  TabNavigation_PageTransitionKeywordGenerated = 10,
  TabNavigation_PageTransitionChainStart = 12,
  TabNavigation_PageTransitionChainEnd = 13,
} TabNavigation_PageTransition;

BOOL TabNavigation_PageTransitionIsValidValue(TabNavigation_PageTransition value);

typedef enum {
  TabNavigation_PageTransitionQualifierClientRedirect = 1,
  TabNavigation_PageTransitionQualifierServerRedirect = 2,
} TabNavigation_PageTransitionQualifier;

BOOL TabNavigation_PageTransitionQualifierIsValidValue(TabNavigation_PageTransitionQualifier value);


@interface SessionSpecificsRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface SessionSpecifics : PBGeneratedMessage {
@private
  BOOL hasTabNodeId_:1;
  BOOL hasSessionTag_:1;
  BOOL hasHeader_:1;
  BOOL hasTab_:1;
  int32_t tabNodeId;
  NSString* sessionTag;
  SessionHeader* header;
  SessionTab* tab;
}
- (BOOL) hasSessionTag;
- (BOOL) hasHeader;
- (BOOL) hasTab;
- (BOOL) hasTabNodeId;
@property (readonly, retain) NSString* sessionTag;
@property (readonly, retain) SessionHeader* header;
@property (readonly, retain) SessionTab* tab;
@property (readonly) int32_t tabNodeId;

+ (SessionSpecifics*) defaultInstance;
- (SessionSpecifics*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SessionSpecifics_Builder*) builder;
+ (SessionSpecifics_Builder*) builder;
+ (SessionSpecifics_Builder*) builderWithPrototype:(SessionSpecifics*) prototype;

+ (SessionSpecifics*) parseFromData:(NSData*) data;
+ (SessionSpecifics*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionSpecifics*) parseFromInputStream:(NSInputStream*) input;
+ (SessionSpecifics*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SessionSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SessionSpecifics_Builder : PBGeneratedMessage_Builder {
@private
  SessionSpecifics* result;
}

- (SessionSpecifics*) defaultInstance;

- (SessionSpecifics_Builder*) clear;
- (SessionSpecifics_Builder*) clone;

- (SessionSpecifics*) build;
- (SessionSpecifics*) buildPartial;

- (SessionSpecifics_Builder*) mergeFrom:(SessionSpecifics*) other;
- (SessionSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SessionSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSessionTag;
- (NSString*) sessionTag;
- (SessionSpecifics_Builder*) setSessionTag:(NSString*) value;
- (SessionSpecifics_Builder*) clearSessionTag;

- (BOOL) hasHeader;
- (SessionHeader*) header;
- (SessionSpecifics_Builder*) setHeader:(SessionHeader*) value;
- (SessionSpecifics_Builder*) setHeaderBuilder:(SessionHeader_Builder*) builderForValue;
- (SessionSpecifics_Builder*) mergeHeader:(SessionHeader*) value;
- (SessionSpecifics_Builder*) clearHeader;

- (BOOL) hasTab;
- (SessionTab*) tab;
- (SessionSpecifics_Builder*) setTab:(SessionTab*) value;
- (SessionSpecifics_Builder*) setTabBuilder:(SessionTab_Builder*) builderForValue;
- (SessionSpecifics_Builder*) mergeTab:(SessionTab*) value;
- (SessionSpecifics_Builder*) clearTab;

- (BOOL) hasTabNodeId;
- (int32_t) tabNodeId;
- (SessionSpecifics_Builder*) setTabNodeId:(int32_t) value;
- (SessionSpecifics_Builder*) clearTabNodeId;
@end

@interface SessionHeader : PBGeneratedMessage {
@private
  BOOL hasClientName_:1;
  BOOL hasDeviceType_:1;
  NSString* clientName;
  SessionHeader_DeviceType deviceType;
  NSMutableArray* mutableWindowList;
}
- (BOOL) hasClientName;
- (BOOL) hasDeviceType;
@property (readonly, retain) NSString* clientName;
@property (readonly) SessionHeader_DeviceType deviceType;
- (NSArray*) windowList;
- (SessionWindow*) windowAtIndex:(int32_t) index;

+ (SessionHeader*) defaultInstance;
- (SessionHeader*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SessionHeader_Builder*) builder;
+ (SessionHeader_Builder*) builder;
+ (SessionHeader_Builder*) builderWithPrototype:(SessionHeader*) prototype;

+ (SessionHeader*) parseFromData:(NSData*) data;
+ (SessionHeader*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionHeader*) parseFromInputStream:(NSInputStream*) input;
+ (SessionHeader*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionHeader*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SessionHeader*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SessionHeader_Builder : PBGeneratedMessage_Builder {
@private
  SessionHeader* result;
}

- (SessionHeader*) defaultInstance;

- (SessionHeader_Builder*) clear;
- (SessionHeader_Builder*) clone;

- (SessionHeader*) build;
- (SessionHeader*) buildPartial;

- (SessionHeader_Builder*) mergeFrom:(SessionHeader*) other;
- (SessionHeader_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SessionHeader_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSArray*) windowList;
- (SessionWindow*) windowAtIndex:(int32_t) index;
- (SessionHeader_Builder*) replaceWindowAtIndex:(int32_t) index with:(SessionWindow*) value;
- (SessionHeader_Builder*) addWindow:(SessionWindow*) value;
- (SessionHeader_Builder*) addAllWindow:(NSArray*) values;
- (SessionHeader_Builder*) clearWindowList;

- (BOOL) hasClientName;
- (NSString*) clientName;
- (SessionHeader_Builder*) setClientName:(NSString*) value;
- (SessionHeader_Builder*) clearClientName;

- (BOOL) hasDeviceType;
- (SessionHeader_DeviceType) deviceType;
- (SessionHeader_Builder*) setDeviceType:(SessionHeader_DeviceType) value;
- (SessionHeader_Builder*) clearDeviceType;
@end

@interface SessionWindow : PBGeneratedMessage {
@private
  BOOL hasWindowId_:1;
  BOOL hasSelectedTabIndex_:1;
  BOOL hasBrowserType_:1;
  int32_t windowId;
  int32_t selectedTabIndex;
  SessionWindow_BrowserType browserType;
  NSMutableArray* mutableTabList;
}
- (BOOL) hasWindowId;
- (BOOL) hasSelectedTabIndex;
- (BOOL) hasBrowserType;
@property (readonly) int32_t windowId;
@property (readonly) int32_t selectedTabIndex;
@property (readonly) SessionWindow_BrowserType browserType;
- (NSArray*) tabList;
- (int32_t) tabAtIndex:(int32_t) index;

+ (SessionWindow*) defaultInstance;
- (SessionWindow*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SessionWindow_Builder*) builder;
+ (SessionWindow_Builder*) builder;
+ (SessionWindow_Builder*) builderWithPrototype:(SessionWindow*) prototype;

+ (SessionWindow*) parseFromData:(NSData*) data;
+ (SessionWindow*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionWindow*) parseFromInputStream:(NSInputStream*) input;
+ (SessionWindow*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionWindow*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SessionWindow*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SessionWindow_Builder : PBGeneratedMessage_Builder {
@private
  SessionWindow* result;
}

- (SessionWindow*) defaultInstance;

- (SessionWindow_Builder*) clear;
- (SessionWindow_Builder*) clone;

- (SessionWindow*) build;
- (SessionWindow*) buildPartial;

- (SessionWindow_Builder*) mergeFrom:(SessionWindow*) other;
- (SessionWindow_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SessionWindow_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasWindowId;
- (int32_t) windowId;
- (SessionWindow_Builder*) setWindowId:(int32_t) value;
- (SessionWindow_Builder*) clearWindowId;

- (BOOL) hasSelectedTabIndex;
- (int32_t) selectedTabIndex;
- (SessionWindow_Builder*) setSelectedTabIndex:(int32_t) value;
- (SessionWindow_Builder*) clearSelectedTabIndex;

- (BOOL) hasBrowserType;
- (SessionWindow_BrowserType) browserType;
- (SessionWindow_Builder*) setBrowserType:(SessionWindow_BrowserType) value;
- (SessionWindow_Builder*) clearBrowserType;

- (NSArray*) tabList;
- (int32_t) tabAtIndex:(int32_t) index;
- (SessionWindow_Builder*) replaceTabAtIndex:(int32_t) index with:(int32_t) value;
- (SessionWindow_Builder*) addTab:(int32_t) value;
- (SessionWindow_Builder*) addAllTab:(NSArray*) values;
- (SessionWindow_Builder*) clearTabList;
@end

@interface SessionTab : PBGeneratedMessage {
@private
  BOOL hasPinned_:1;
  BOOL hasTabId_:1;
  BOOL hasWindowId_:1;
  BOOL hasTabVisualIndex_:1;
  BOOL hasCurrentNavigationIndex_:1;
  BOOL hasExtensionAppId_:1;
  BOOL pinned_:1;
  int32_t tabId;
  int32_t windowId;
  int32_t tabVisualIndex;
  int32_t currentNavigationIndex;
  NSString* extensionAppId;
  NSMutableArray* mutableNavigationList;
}
- (BOOL) hasTabId;
- (BOOL) hasWindowId;
- (BOOL) hasTabVisualIndex;
- (BOOL) hasCurrentNavigationIndex;
- (BOOL) hasPinned;
- (BOOL) hasExtensionAppId;
@property (readonly) int32_t tabId;
@property (readonly) int32_t windowId;
@property (readonly) int32_t tabVisualIndex;
@property (readonly) int32_t currentNavigationIndex;
- (BOOL) pinned;
@property (readonly, retain) NSString* extensionAppId;
- (NSArray*) navigationList;
- (TabNavigation*) navigationAtIndex:(int32_t) index;

+ (SessionTab*) defaultInstance;
- (SessionTab*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SessionTab_Builder*) builder;
+ (SessionTab_Builder*) builder;
+ (SessionTab_Builder*) builderWithPrototype:(SessionTab*) prototype;

+ (SessionTab*) parseFromData:(NSData*) data;
+ (SessionTab*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionTab*) parseFromInputStream:(NSInputStream*) input;
+ (SessionTab*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SessionTab*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SessionTab*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SessionTab_Builder : PBGeneratedMessage_Builder {
@private
  SessionTab* result;
}

- (SessionTab*) defaultInstance;

- (SessionTab_Builder*) clear;
- (SessionTab_Builder*) clone;

- (SessionTab*) build;
- (SessionTab*) buildPartial;

- (SessionTab_Builder*) mergeFrom:(SessionTab*) other;
- (SessionTab_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SessionTab_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasTabId;
- (int32_t) tabId;
- (SessionTab_Builder*) setTabId:(int32_t) value;
- (SessionTab_Builder*) clearTabId;

- (BOOL) hasWindowId;
- (int32_t) windowId;
- (SessionTab_Builder*) setWindowId:(int32_t) value;
- (SessionTab_Builder*) clearWindowId;

- (BOOL) hasTabVisualIndex;
- (int32_t) tabVisualIndex;
- (SessionTab_Builder*) setTabVisualIndex:(int32_t) value;
- (SessionTab_Builder*) clearTabVisualIndex;

- (BOOL) hasCurrentNavigationIndex;
- (int32_t) currentNavigationIndex;
- (SessionTab_Builder*) setCurrentNavigationIndex:(int32_t) value;
- (SessionTab_Builder*) clearCurrentNavigationIndex;

- (BOOL) hasPinned;
- (BOOL) pinned;
- (SessionTab_Builder*) setPinned:(BOOL) value;
- (SessionTab_Builder*) clearPinned;

- (BOOL) hasExtensionAppId;
- (NSString*) extensionAppId;
- (SessionTab_Builder*) setExtensionAppId:(NSString*) value;
- (SessionTab_Builder*) clearExtensionAppId;

- (NSArray*) navigationList;
- (TabNavigation*) navigationAtIndex:(int32_t) index;
- (SessionTab_Builder*) replaceNavigationAtIndex:(int32_t) index with:(TabNavigation*) value;
- (SessionTab_Builder*) addNavigation:(TabNavigation*) value;
- (SessionTab_Builder*) addAllNavigation:(NSArray*) values;
- (SessionTab_Builder*) clearNavigationList;
@end

@interface TabNavigation : PBGeneratedMessage {
@private
  BOOL hasIndex_:1;
  BOOL hasVirtualUrl_:1;
  BOOL hasReferrer_:1;
  BOOL hasTitle_:1;
  BOOL hasState_:1;
  BOOL hasPageTransition_:1;
  BOOL hasNavigationQualifier_:1;
  int32_t index;
  NSString* virtualUrl;
  NSString* referrer;
  NSString* title;
  NSString* state;
  TabNavigation_PageTransition pageTransition;
  TabNavigation_PageTransitionQualifier navigationQualifier;
}
- (BOOL) hasIndex;
- (BOOL) hasVirtualUrl;
- (BOOL) hasReferrer;
- (BOOL) hasTitle;
- (BOOL) hasState;
- (BOOL) hasPageTransition;
- (BOOL) hasNavigationQualifier;
@property (readonly) int32_t index;
@property (readonly, retain) NSString* virtualUrl;
@property (readonly, retain) NSString* referrer;
@property (readonly, retain) NSString* title;
@property (readonly, retain) NSString* state;
@property (readonly) TabNavigation_PageTransition pageTransition;
@property (readonly) TabNavigation_PageTransitionQualifier navigationQualifier;

+ (TabNavigation*) defaultInstance;
- (TabNavigation*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TabNavigation_Builder*) builder;
+ (TabNavigation_Builder*) builder;
+ (TabNavigation_Builder*) builderWithPrototype:(TabNavigation*) prototype;

+ (TabNavigation*) parseFromData:(NSData*) data;
+ (TabNavigation*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TabNavigation*) parseFromInputStream:(NSInputStream*) input;
+ (TabNavigation*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TabNavigation*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TabNavigation*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TabNavigation_Builder : PBGeneratedMessage_Builder {
@private
  TabNavigation* result;
}

- (TabNavigation*) defaultInstance;

- (TabNavigation_Builder*) clear;
- (TabNavigation_Builder*) clone;

- (TabNavigation*) build;
- (TabNavigation*) buildPartial;

- (TabNavigation_Builder*) mergeFrom:(TabNavigation*) other;
- (TabNavigation_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TabNavigation_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasIndex;
- (int32_t) index;
- (TabNavigation_Builder*) setIndex:(int32_t) value;
- (TabNavigation_Builder*) clearIndex;

- (BOOL) hasVirtualUrl;
- (NSString*) virtualUrl;
- (TabNavigation_Builder*) setVirtualUrl:(NSString*) value;
- (TabNavigation_Builder*) clearVirtualUrl;

- (BOOL) hasReferrer;
- (NSString*) referrer;
- (TabNavigation_Builder*) setReferrer:(NSString*) value;
- (TabNavigation_Builder*) clearReferrer;

- (BOOL) hasTitle;
- (NSString*) title;
- (TabNavigation_Builder*) setTitle:(NSString*) value;
- (TabNavigation_Builder*) clearTitle;

- (BOOL) hasState;
- (NSString*) state;
- (TabNavigation_Builder*) setState:(NSString*) value;
- (TabNavigation_Builder*) clearState;

- (BOOL) hasPageTransition;
- (TabNavigation_PageTransition) pageTransition;
- (TabNavigation_Builder*) setPageTransition:(TabNavigation_PageTransition) value;
- (TabNavigation_Builder*) clearPageTransition;

- (BOOL) hasNavigationQualifier;
- (TabNavigation_PageTransitionQualifier) navigationQualifier;
- (TabNavigation_Builder*) setNavigationQualifier:(TabNavigation_PageTransitionQualifier) value;
- (TabNavigation_Builder*) clearNavigationQualifier;
@end

