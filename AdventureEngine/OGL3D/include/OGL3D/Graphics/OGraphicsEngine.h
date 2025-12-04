#pragma once
#include <OGL3D/Math/OVec4.h>
#include <OGL3D/Math/ORect.h>

class OGraphicsEngine
{

public: 
	OGraphicsEngine();
	~OGraphicsEngine();

public:
	OVertexArrayObjectPtr createVertexArrayObejct(const OVertexBufferData& data);
public:
	void setVertexArrayObject(const OVertexArrayObjectPtr& vao);
	void clear(const OVec4& color);
	void setViewPort(const ORect& size);
	void drawTriangle(ui32 vertexCount, ui32 offset);
};

