#pragma once

class Mesh;
class Transformation;
class Texture;
class Material;

#include "../Interfaces/Drawable.h"

class Object: public Drawable
{
	Mesh* m_mesh;
	Transformation* m_transformation;
	Mesh* m_collisionMesh;
	Texture* m_texture;
	Material* m_material;
public:
	Object();
	virtual ~Object();

	void Draw();
};

