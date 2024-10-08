//
//  RendererAdapter.h
//  3d game engine
//
//  Created by Arun yadav on 08/10/24.
//
#import "QuartzCore/CAMetalLayer.h"
#import "Metal/MTLDevice.h"
#import "Renderer.h"

@interface RendererAdapter : NSObject
{
    Renderer * _pRenderer;
}
-(void)draw:(id<CAMetalDrawable>) drawable device: (id <MTLDevice>) device;
@end
