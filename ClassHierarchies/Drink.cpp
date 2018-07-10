#include "stdafx.h"
#include "Drink.h"
#include <string>

Drink::Drink(int id, const char* name, double price, double liters)
{
	m_id = id;

	name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);
	
	m_price = price;

	m_liters = liters;
}


Drink::~Drink()
{
}
