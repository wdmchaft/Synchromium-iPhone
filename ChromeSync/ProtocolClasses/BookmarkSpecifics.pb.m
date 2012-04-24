// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "BookmarkSpecifics.pb.h"

@implementation BookmarkSpecificsRoot
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [BookmarkSpecificsRoot class]) {
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    extensionRegistry = [registry retain];
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
}
@end

@interface BookmarkSpecifics ()
@property (retain) NSString* url;
@property (retain) NSData* favicon;
@property (retain) NSString* title;
@end

@implementation BookmarkSpecifics

- (BOOL) hasUrl {
  return !!hasUrl_;
}
- (void) setHasUrl:(BOOL) value {
  hasUrl_ = !!value;
}
@synthesize url;
- (BOOL) hasFavicon {
  return !!hasFavicon_;
}
- (void) setHasFavicon:(BOOL) value {
  hasFavicon_ = !!value;
}
@synthesize favicon;
- (BOOL) hasTitle {
  return !!hasTitle_;
}
- (void) setHasTitle:(BOOL) value {
  hasTitle_ = !!value;
}
@synthesize title;
- (void) dealloc {
  self.url = nil;
  self.favicon = nil;
  self.title = nil;
  [super dealloc];
}
- (id) init {
  if ((self = [super init])) {
    self.url = @"";
    self.favicon = [NSData data];
    self.title = @"";
  }
  return self;
}
static BookmarkSpecifics* defaultBookmarkSpecificsInstance = nil;
+ (void) initialize {
  if (self == [BookmarkSpecifics class]) {
    defaultBookmarkSpecificsInstance = [[BookmarkSpecifics alloc] init];
  }
}
+ (BookmarkSpecifics*) defaultInstance {
  return defaultBookmarkSpecificsInstance;
}
- (BookmarkSpecifics*) defaultInstance {
  return defaultBookmarkSpecificsInstance;
}
- (BOOL) isInitialized {
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasUrl) {
    [output writeString:1 value:self.url];
  }
  if (self.hasFavicon) {
    [output writeData:2 value:self.favicon];
  }
  if (self.hasTitle) {
    [output writeString:3 value:self.title];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (int32_t) serializedSize {
  int32_t size = memoizedSerializedSize;
  if (size != -1) {
    return size;
  }

  size = 0;
  if (self.hasUrl) {
    size += computeStringSize(1, self.url);
  }
  if (self.hasFavicon) {
    size += computeDataSize(2, self.favicon);
  }
  if (self.hasTitle) {
    size += computeStringSize(3, self.title);
  }
  size += self.unknownFields.serializedSize;
  memoizedSerializedSize = size;
  return size;
}
+ (BookmarkSpecifics*) parseFromData:(NSData*) data {
  return (BookmarkSpecifics*)[[[BookmarkSpecifics builder] mergeFromData:data] build];
}
+ (BookmarkSpecifics*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (BookmarkSpecifics*)[[[BookmarkSpecifics builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (BookmarkSpecifics*) parseFromInputStream:(NSInputStream*) input {
  return (BookmarkSpecifics*)[[[BookmarkSpecifics builder] mergeFromInputStream:input] build];
}
+ (BookmarkSpecifics*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (BookmarkSpecifics*)[[[BookmarkSpecifics builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (BookmarkSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (BookmarkSpecifics*)[[[BookmarkSpecifics builder] mergeFromCodedInputStream:input] build];
}
+ (BookmarkSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (BookmarkSpecifics*)[[[BookmarkSpecifics builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (BookmarkSpecifics_Builder*) builder {
  return [[[BookmarkSpecifics_Builder alloc] init] autorelease];
}
+ (BookmarkSpecifics_Builder*) builderWithPrototype:(BookmarkSpecifics*) prototype {
  return [[BookmarkSpecifics builder] mergeFrom:prototype];
}
- (BookmarkSpecifics_Builder*) builder {
  return [BookmarkSpecifics builder];
}
@end

@interface BookmarkSpecifics_Builder()
@property (retain) BookmarkSpecifics* result;
@end

@implementation BookmarkSpecifics_Builder
@synthesize result;
- (void) dealloc {
  self.result = nil;
  [super dealloc];
}
- (id) init {
  if ((self = [super init])) {
    self.result = [[[BookmarkSpecifics alloc] init] autorelease];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return result;
}
- (BookmarkSpecifics_Builder*) clear {
  self.result = [[[BookmarkSpecifics alloc] init] autorelease];
  return self;
}
- (BookmarkSpecifics_Builder*) clone {
  return [BookmarkSpecifics builderWithPrototype:result];
}
- (BookmarkSpecifics*) defaultInstance {
  return [BookmarkSpecifics defaultInstance];
}
- (BookmarkSpecifics*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (BookmarkSpecifics*) buildPartial {
  BookmarkSpecifics* returnMe = [[result retain] autorelease];
  self.result = nil;
  return returnMe;
}
- (BookmarkSpecifics_Builder*) mergeFrom:(BookmarkSpecifics*) other {
  if (other == [BookmarkSpecifics defaultInstance]) {
    return self;
  }
  if (other.hasUrl) {
    [self setUrl:other.url];
  }
  if (other.hasFavicon) {
    [self setFavicon:other.favicon];
  }
  if (other.hasTitle) {
    [self setTitle:other.title];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (BookmarkSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (BookmarkSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  PBUnknownFieldSet_Builder* unknownFields = [PBUnknownFieldSet builderWithUnknownFields:self.unknownFields];
  while (YES) {
    int32_t tag = [input readTag];
    switch (tag) {
      case 0:
        [self setUnknownFields:[unknownFields build]];
        return self;
      default: {
        if (![self parseUnknownField:input unknownFields:unknownFields extensionRegistry:extensionRegistry tag:tag]) {
          [self setUnknownFields:[unknownFields build]];
          return self;
        }
        break;
      }
      case 10: {
        [self setUrl:[input readString]];
        break;
      }
      case 18: {
        [self setFavicon:[input readData]];
        break;
      }
      case 26: {
        [self setTitle:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasUrl {
  return result.hasUrl;
}
- (NSString*) url {
  return result.url;
}
- (BookmarkSpecifics_Builder*) setUrl:(NSString*) value {
  result.hasUrl = YES;
  result.url = value;
  return self;
}
- (BookmarkSpecifics_Builder*) clearUrl {
  result.hasUrl = NO;
  result.url = @"";
  return self;
}
- (BOOL) hasFavicon {
  return result.hasFavicon;
}
- (NSData*) favicon {
  return result.favicon;
}
- (BookmarkSpecifics_Builder*) setFavicon:(NSData*) value {
  result.hasFavicon = YES;
  result.favicon = value;
  return self;
}
- (BookmarkSpecifics_Builder*) clearFavicon {
  result.hasFavicon = NO;
  result.favicon = [NSData data];
  return self;
}
- (BOOL) hasTitle {
  return result.hasTitle;
}
- (NSString*) title {
  return result.title;
}
- (BookmarkSpecifics_Builder*) setTitle:(NSString*) value {
  result.hasTitle = YES;
  result.title = value;
  return self;
}
- (BookmarkSpecifics_Builder*) clearTitle {
  result.hasTitle = NO;
  result.title = @"";
  return self;
}
@end
