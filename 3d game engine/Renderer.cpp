//
//  Renderer.cpp
//  3d game engine
//
//  Created by Arun yadav on 07/10/24.
//
#define NS_PRIVATE_IMPLEMENTATION
#define CA_PRIVATE_IMPLEMENTATION
#define MTL_PRIVATE_IMPLEMENTATION

#include "Renderer.h"
#include <iostream>

Renderer::Renderer(CA::MetalDrawable * const pDrawable, MTL::Device * const pDevice)
    : _pDrawable(pDrawable),
      _pDevice(pDevice),
      _pCommandQueue(_pDevice->newCommandQueue())
{}

Renderer::~Renderer()
{
    if (_pCommandQueue)
    {
        _pCommandQueue->release();
       // _pCommandQueue = nullptr;
    }
}

void Renderer::draw() const
{
    std::cout << "Hello world" << std::endl;

    // Placeholder for drawing logic using Metal
    // Example: Setting up a render pass descriptor, encoder, etc.
}

