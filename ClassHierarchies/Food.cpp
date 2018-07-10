#include "stdafx.h"
#include "Food.h"
#include <string>

Food::Food(int id, const char* name, double price, int expYear, int expMonth, int expDay)
{
	m_id = id;

	name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);

	m_price = price;
	m_expirationYear = expYear;
	m_expirationMonth = expMonth;
	m_expirationDay = expDay;
}


Food::~Food()
{
}
