#include "stdafx.h"
#include "Drink.h"
#include <string>
#include <iostream>
using namespace std;

Drink::Drink( const char* name, double price, double liters)
	:Product( name, price)
{
	m_liters = liters;
}


Drink::~Drink()
{
}


void Drink::Print()
{
	Product::Print();
	cout << "Liters: " << m_liters << "\n";
}