#include "stdafx.h"
#include "Shop.h"
#include "Book.h"
#include <iostream>
using namespace std;

Shop::Shop(int maxNumProducts)
{
	m_products = new Product*[maxNumProducts];
	m_maxNumProducts = maxNumProducts;
	m_numProducts = 0;
}


Shop::~Shop()
{
	//delete each of the products: only the first m_numProducts pointers are initialized
	for (int i = 0; i < m_numProducts; i++)
		delete m_products[i];

	//delete the array of pointer
	delete[] m_products;
}

void Shop::AddProduct(Product* pProduct)
{
	//if there is no free storage for the new product, delete it and return
	//We must delete it because the way the Shop is in charge of deleting the products
	if (m_numProducts >= m_maxNumProducts)
	{
		cout << "Product deleted for lack of space in shop: \n";
		pProduct->Print();
		cout << "------------------------------\n";
		delete pProduct;
		return;
	}

	m_products[m_numProducts] = pProduct;
	m_numProducts++;
}

void Shop::Print()
{
	for (int i = 0; i < m_numProducts; i++)
	{
		m_products[i]->Print();
	}
}

void Shop::PrintAllBooks()
{
	for (int i = 0; i < m_numProducts; i++)
	{
		if (dynamic_cast<Book*>(m_products[i]) != nullptr)
			m_products[i]->Print();
	}
}
