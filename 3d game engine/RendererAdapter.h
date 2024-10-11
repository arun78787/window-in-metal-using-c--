#import <QuartzCore/CAMetalLayer.h>
#import <Metal/MTLDevice.h>
#import <MetalKit/MTKView.h>

#import "Renderer.h"

@interface RendererAdapter : NSObject<MTKViewDelegate>
{
  Renderer * _pRenderer;
}
- (nonnull instancetype) initWithMTKView:(MTKView * _Nonnull )pView;
@end
