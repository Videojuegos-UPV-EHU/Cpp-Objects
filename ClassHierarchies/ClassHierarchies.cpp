// ClassHierarchies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shop.h"
#include "Product.h"
#include "Book.h"
#include "Food.h"
#include "Drink.h"

int main()
{
	Shop myShop;
	Product product1;

	Book *pBook1= new Book(1,"Red Rising",13.2,"Pierce Brown");
	myShop.AddProduct(pBook1);
	Book *pBook2= new Book(1, "Red Rising", 13.2, "Pierce Brown");
	myShop.AddProduct(pBook2);
	Drink *pDrink1= new Drink(5,"")

    return 0;
}

