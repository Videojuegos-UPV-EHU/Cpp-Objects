#include "stdafx.h"
#include "Book.h"
#include <string>

Book::Book(int id, const char* name, double price, const char* author)
{
	m_id = id;

	name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);

	m_price = price;

	name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);
}


Book::~Book()
{
}
