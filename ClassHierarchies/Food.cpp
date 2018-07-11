#include "stdafx.h"
#include "Food.h"
#include <string>
#include <iostream>
using namespace std;

Food::Food( const char* name, double price, int expYear, int expMonth, int expDay)
	:Product( name, price)
{
	m_expirationYear = expYear;
	m_expirationMonth = expMonth;
	m_expirationDay = expDay;
}


Food::~Food()
{
}

void Food::Print()
{
	Product::Print();
	cout << "Expiracy date: " << m_expirationYear << "/" << m_expirationMonth <<
		"/" << m_expirationDay << "\n";
}