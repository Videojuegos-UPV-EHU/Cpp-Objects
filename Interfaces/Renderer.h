#pragma once

#include "Drawable.h"

class Renderer
{
	Drawable** m_graphicObjects;
	int m_maxNumObjects= 100;
	int m_numObjects= 0;
public:
	Renderer();
	~Renderer();

	void Draw();
	void AddDrawable(Drawable* pObj);
};

