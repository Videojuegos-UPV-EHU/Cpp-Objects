#include "stdafx.h"
#include "Renderer.h"
#include <iostream>
using namespace std;

Renderer::Renderer()
{
	m_graphicObjects = new Drawable*[m_maxNumObjects];
}


Renderer::~Renderer()
{
	for (int i = 0; i < m_numObjects; i++)
	{
		delete m_graphicObjects[i];
	}
	delete[] m_graphicObjects;
}


void Renderer::Draw()
{
	for (int i = 0; i < m_numObjects; i++)
	{
		m_graphicObjects[i]->Draw();
	}
	cout << "\n";
}

void Renderer::AddDrawable(Drawable* pObj)
{
	if (m_numObjects >= m_maxNumObjects)
	{
		cout << "Error: not enough room to store more drawable objects";
		delete pObj;
		return;
	}

	m_graphicObjects[m_numObjects] = pObj;
	m_numObjects++;
}