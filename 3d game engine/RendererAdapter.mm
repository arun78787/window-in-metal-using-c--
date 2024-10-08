//
//  RendererAdapter.m
//  3d game engine
//
//  Created by Arun yadav on 08/10/24.
//

#import "RendererAdapter.h"

@implementation RendererAdapter
- (void)draw:(id <CAMetalDrawable>) drawable device: (id <MTLDevice>) device
{
    _pRenderer = new Renderer((__bridge CA::MetalDrawable *)drawable, (__bridge MTL::Device *)device);
    _pRenderer->draw();
}
-(void)dealloc
{
    delete _pRenderer;
}
@end
