#include "stdafx.h"
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

Book::Book(const char* name, double price, const char* author)
	:Product(name, price)
{
	m_author = new char[strlen(author) + 1];
	strcpy_s(m_author, strlen(author) + 1, author);
}


Book::~Book()
{
	if (m_author)
		delete[] m_author;
}


void Book::Print()
{
	Product::Print();
	cout << "Author: " << m_author << "\n";
}