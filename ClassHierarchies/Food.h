#pragma once

#include "Product.h"

class Food : public Product
{
	int m_expirationYear, m_expirationMonth, m_expirationDay;
public:
	Food(const char* name, double price, int expYear, int expMonth, int expDay);
	virtual ~Food();

	void Print();
};

