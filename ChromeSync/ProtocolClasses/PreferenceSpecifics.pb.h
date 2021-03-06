// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class PreferenceSpecifics;
@class PreferenceSpecifics_Builder;

@interface PreferenceSpecificsRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface PreferenceSpecifics : PBGeneratedMessage {
@private
  BOOL hasName_:1;
  BOOL hasValue_:1;
  NSString* name;
  NSString* value;
}
- (BOOL) hasName;
- (BOOL) hasValue;
@property (readonly, retain) NSString* name;
@property (readonly, retain) NSString* value;

+ (PreferenceSpecifics*) defaultInstance;
- (PreferenceSpecifics*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PreferenceSpecifics_Builder*) builder;
+ (PreferenceSpecifics_Builder*) builder;
+ (PreferenceSpecifics_Builder*) builderWithPrototype:(PreferenceSpecifics*) prototype;

+ (PreferenceSpecifics*) parseFromData:(NSData*) data;
+ (PreferenceSpecifics*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PreferenceSpecifics*) parseFromInputStream:(NSInputStream*) input;
+ (PreferenceSpecifics*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PreferenceSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PreferenceSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PreferenceSpecifics_Builder : PBGeneratedMessage_Builder {
@private
  PreferenceSpecifics* result;
}

- (PreferenceSpecifics*) defaultInstance;

- (PreferenceSpecifics_Builder*) clear;
- (PreferenceSpecifics_Builder*) clone;

- (PreferenceSpecifics*) build;
- (PreferenceSpecifics*) buildPartial;

- (PreferenceSpecifics_Builder*) mergeFrom:(PreferenceSpecifics*) other;
- (PreferenceSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PreferenceSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (PreferenceSpecifics_Builder*) setName:(NSString*) value;
- (PreferenceSpecifics_Builder*) clearName;

- (BOOL) hasValue;
- (NSString*) value;
- (PreferenceSpecifics_Builder*) setValue:(NSString*) value;
- (PreferenceSpecifics_Builder*) clearValue;
@end

