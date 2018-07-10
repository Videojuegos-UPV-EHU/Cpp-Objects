#include "stdafx.h"
#include "Product.h"
#include <string>
#include <iostream>
using namespace std;

Product::Product()
{
	m_name = nullptr;
	m_price = 0.0;
}

Product::~Product()
{
	if (m_name)
		delete[] m_name;
}

const char* Product::Name()
{
	return m_name;
}

double Product::Price()
{
	return m_price;
}

void Product::SetName(const char* name)
{
	if (m_name) delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);
}
void Product::SetPrice(double price)
{
	m_price = price;
}

void Product::Print()
{
	cout << "Name: " << Name() << " Price: " << Price() << "\n";
}