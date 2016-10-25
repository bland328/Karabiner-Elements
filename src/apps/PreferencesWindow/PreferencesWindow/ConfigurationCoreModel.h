// -*- Mode: objc -*-

@import Cocoa;

@interface ConfigurationCoreModel : NSObject

@property(copy, readonly) NSArray<NSDictionary*>* simpleModifications;
@property(copy, readonly) NSArray<NSDictionary*>* fnFunctionKeys;
@property(copy, readonly) NSArray<NSDictionary*>* devices;
@property(copy, readonly) NSDictionary* simpleModificationsDictionary;
@property(copy, readonly) NSDictionary* fnFunctionKeysDictionary;

- (instancetype)initWithProfile:(NSDictionary*)profile;

- (void)addSimpleModification;
- (void)removeSimpleModification:(NSUInteger)index;
- (void)replaceSimpleModification:(NSUInteger)index from:(NSString*)from to:(NSString*)to;

- (void)replaceFnFunctionKey:(NSString*)from to:(NSString*)to;

- (void)setDeviceIgnore:(BOOL)ignore vendorId:(uint32_t)vendorId productId:(uint32_t)productId;

@end
