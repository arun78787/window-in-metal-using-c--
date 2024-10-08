//
//  Renderer.h
//  3d game engine
//
//  Created by Arun yadav on 07/10/24.
//

#include "Metal/Metal.hpp"
#include "QuartzCore/CAMetalDrawable.hpp"

class Renderer {
public:
    Renderer(CA::MetalDrawable * const pDrawable, MTL::Device * const pDevice);
    ~Renderer();
    void draw() const;
private:
    CA::MetalDrawable * _pDrawable;
    MTL::Device * const _pDevice;
    MTL::CommandQueue * const _pCommandQueue;
    std::unique_ptr<MTL::RenderPipelineState, void(*)(MTL::RenderPipelineState *)> _pRenderPipelineState;
    
    void buildShaders();
};
