#pragma once

#include "Product.h"

class Book : public Product
{
	char * m_author;
public:
	Book(int id, const char* name, double price, const char* author);
	virtual ~Book();
};

