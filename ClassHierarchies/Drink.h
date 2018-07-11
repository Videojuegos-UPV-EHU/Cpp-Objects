#pragma once

#include "Product.h"

class Drink : public Product
{
	double m_liters;
public:
	Drink( const char* name, double price, double liters);
	virtual ~Drink();

	void Print();
};

