//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EJGLProgram2D : NSObject
{
    unsigned int program;
    unsigned int screen;
}

+ (void)linkProgram:(unsigned int)arg1;
+ (int)compileShaderSource:(const char *)arg1 type:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int screen; // @synthesize screen;
@property(readonly, nonatomic) unsigned int program; // @synthesize program;
- (void)getUniforms;
- (void)bindAttributeLocations;
- (void)dealloc;
- (id)initWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;

@end
