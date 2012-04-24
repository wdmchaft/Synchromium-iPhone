// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "Encryption.pb.h"

@implementation EncryptionRoot
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [EncryptionRoot class]) {
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    extensionRegistry = [registry retain];
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
}
@end

@interface EncryptedData ()
@property (retain) NSString* keyName;
@property (retain) NSString* blob;
@end

@implementation EncryptedData

- (BOOL) hasKeyName {
  return !!hasKeyName_;
}
- (void) setHasKeyName:(BOOL) value {
  hasKeyName_ = !!value;
}
@synthesize keyName;
- (BOOL) hasBlob {
  return !!hasBlob_;
}
- (void) setHasBlob:(BOOL) value {
  hasBlob_ = !!value;
}
@synthesize blob;
- (void) dealloc {
  self.keyName = nil;
  self.blob = nil;
  [super dealloc];
}
- (id) init {
  if ((self = [super init])) {
    self.keyName = @"";
    self.blob = @"";
  }
  return self;
}
static EncryptedData* defaultEncryptedDataInstance = nil;
+ (void) initialize {
  if (self == [EncryptedData class]) {
    defaultEncryptedDataInstance = [[EncryptedData alloc] init];
  }
}
+ (EncryptedData*) defaultInstance {
  return defaultEncryptedDataInstance;
}
- (EncryptedData*) defaultInstance {
  return defaultEncryptedDataInstance;
}
- (BOOL) isInitialized {
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasKeyName) {
    [output writeString:1 value:self.keyName];
  }
  if (self.hasBlob) {
    [output writeString:2 value:self.blob];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (int32_t) serializedSize {
  int32_t size = memoizedSerializedSize;
  if (size != -1) {
    return size;
  }

  size = 0;
  if (self.hasKeyName) {
    size += computeStringSize(1, self.keyName);
  }
  if (self.hasBlob) {
    size += computeStringSize(2, self.blob);
  }
  size += self.unknownFields.serializedSize;
  memoizedSerializedSize = size;
  return size;
}
+ (EncryptedData*) parseFromData:(NSData*) data {
  return (EncryptedData*)[[[EncryptedData builder] mergeFromData:data] build];
}
+ (EncryptedData*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (EncryptedData*)[[[EncryptedData builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (EncryptedData*) parseFromInputStream:(NSInputStream*) input {
  return (EncryptedData*)[[[EncryptedData builder] mergeFromInputStream:input] build];
}
+ (EncryptedData*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (EncryptedData*)[[[EncryptedData builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (EncryptedData*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (EncryptedData*)[[[EncryptedData builder] mergeFromCodedInputStream:input] build];
}
+ (EncryptedData*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (EncryptedData*)[[[EncryptedData builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (EncryptedData_Builder*) builder {
  return [[[EncryptedData_Builder alloc] init] autorelease];
}
+ (EncryptedData_Builder*) builderWithPrototype:(EncryptedData*) prototype {
  return [[EncryptedData builder] mergeFrom:prototype];
}
- (EncryptedData_Builder*) builder {
  return [EncryptedData builder];
}
@end

@interface EncryptedData_Builder()
@property (retain) EncryptedData* result;
@end

@implementation EncryptedData_Builder
@synthesize result;
- (void) dealloc {
  self.result = nil;
  [super dealloc];
}
- (id) init {
  if ((self = [super init])) {
    self.result = [[[EncryptedData alloc] init] autorelease];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return result;
}
- (EncryptedData_Builder*) clear {
  self.result = [[[EncryptedData alloc] init] autorelease];
  return self;
}
- (EncryptedData_Builder*) clone {
  return [EncryptedData builderWithPrototype:result];
}
- (EncryptedData*) defaultInstance {
  return [EncryptedData defaultInstance];
}
- (EncryptedData*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (EncryptedData*) buildPartial {
  EncryptedData* returnMe = [[result retain] autorelease];
  self.result = nil;
  return returnMe;
}
- (EncryptedData_Builder*) mergeFrom:(EncryptedData*) other {
  if (other == [EncryptedData defaultInstance]) {
    return self;
  }
  if (other.hasKeyName) {
    [self setKeyName:other.keyName];
  }
  if (other.hasBlob) {
    [self setBlob:other.blob];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (EncryptedData_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (EncryptedData_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setKeyName:[input readString]];
        break;
      }
      case 18: {
        [self setBlob:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasKeyName {
  return result.hasKeyName;
}
- (NSString*) keyName {
  return result.keyName;
}
- (EncryptedData_Builder*) setKeyName:(NSString*) value {
  result.hasKeyName = YES;
  result.keyName = value;
  return self;
}
- (EncryptedData_Builder*) clearKeyName {
  result.hasKeyName = NO;
  result.keyName = @"";
  return self;
}
- (BOOL) hasBlob {
  return result.hasBlob;
}
- (NSString*) blob {
  return result.blob;
}
- (EncryptedData_Builder*) setBlob:(NSString*) value {
  result.hasBlob = YES;
  result.blob = value;
  return self;
}
- (EncryptedData_Builder*) clearBlob {
  result.hasBlob = NO;
  result.blob = @"";
  return self;
}
@end
