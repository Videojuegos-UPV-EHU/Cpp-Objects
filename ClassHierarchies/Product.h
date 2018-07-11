#pragma once

class Product
{
protected:
	int m_id;
	char* m_name;
	double m_price;

	static int m_lastId;
	
	//This is the base class and should not be instanced directly, so it must be protected
	//Subclass constructors (Book(...), Food(...) or Drink(...)) should be used instead
	Product(const char* name, double price);
public:
	virtual ~Product();

	const char* Name();
	double Price();

	void SetName(const char* name);
	void SetPrice(double price);

	virtual void Print();
};

