//
//  OpenGLView.h
//  OpenGLView
//
//  Created by Hiromi Sawada on 9/10/12.
//  Copyright (c) 2012 shiromim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView {
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    GLuint _colorRenderBuffer;
    
    // Vertex, Color
    GLuint _positionSlot;
    GLuint _colorSlot;
    
    // Projection
    GLuint _projectionUniform;
    
    // Translation
    GLuint _modelViewUniform;
    // Rotation
    float _currentRotation;
    
    // Depth testing
    GLuint _depthRenderBuffer;
    
    // Texture
    GLuint _floorTexture;
    GLuint _fishTexture;
    GLuint _texCoordSlot;
    GLuint _textureUniform;
    
    // Additional Texture
    GLuint _vertexBuffer;
    GLuint _indexBuffer;
    GLuint _vertexBuffer2;
    GLuint _indexBuffer2;
}

@end
