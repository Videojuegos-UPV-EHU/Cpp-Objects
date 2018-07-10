#pragma once

class Product
{
protected:
	int m_id;
	char* m_name;
	double m_price;
	
	//This is the base class and should not be instanced directly, so it must be protected
	//Subclass constructors (Book(...), Food(...) or Drink(...)) should be used instead
	Product();
public:
	virtual ~Product();

	const char* Name();
	double Price();

	void SetName(const char* name);
	void SetPrice(double price);

	void Print();
};

