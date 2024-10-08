//
//  Shaders.metal
//  3d game engine
//
//  Created by Arun yadav on 09/10/24.
//
#include <metal_stdlib>
using namespace metal;

[[vertex]] float4 vertexShader(const constant packed_float3 * triangleVertices [[buffer(5)]], const ushort vertexIndex [[vertex_id]])
{
//    const float x = triangleVertices[vertexIndex];
//    const float y = triangleVertices[vertexIndex + 1];
//    const float z = triangleVertices[vertexIndex + 2];
//    return float4(x, y, z, 1.0f);
    
    return float4(triangleVertices[vertexIndex], 1.0f);
}

[[fragment]] float4 fragmentShader() {
    return float4(1.0f, .0f, 1.0f, 1.0f);
}
