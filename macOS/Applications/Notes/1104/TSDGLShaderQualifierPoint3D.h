//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier
{
    CDStruct_03942939 _GLPoint3DValue;
    CDStruct_03942939 _proposedGLPoint3DValue;
}

@property(nonatomic) CDStruct_03942939 proposedGLPoint3DValue; // @synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue;
@property(readonly, nonatomic) CDStruct_03942939 GLPoint3DValue; // @synthesize GLPoint3DValue=_GLPoint3DValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

