#pragma once

#include "Product.h"

class Shop
{
	Product** m_products;
	int m_maxNumProducts;
	int m_numProducts = 0;
public:
	Shop(int maxNumProducts= 100);
	~Shop();

	void AddProduct(Product* pProduct);
	void Print();
	void PrintAllBooks();
};

