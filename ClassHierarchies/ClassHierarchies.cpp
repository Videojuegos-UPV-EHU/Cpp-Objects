// ClassHierarchies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shop.h"
#include "Product.h"
#include "Book.h"
#include "Food.h"
#include "Drink.h"

//Consider a shop that sells three types of products: books, food and drinks. Each type of products needs different
//data to be saved. For example, we need to know when a food product expires, but books and drinks may have no expiracy date.
//Without using hierarchy we may have replicated attributes:
//
//        _Book____         _Food____________         _Drink___
//        | -Id    |        | -Id            |        | -Id    |
//        | -Name  |        | -Name          |        | -Name  |
//        | -Price |        | -Price         |        | -Price |
//        | -Author|        | -ExpirationDate|        | -Liters|
//        |________|        |________________|        |________|



//Using a class hierarchy, we place all common attributes in a common class from which all others inherit:
//
//            _Product_______________
//            | -Id                  |
//            | -Name                |
//            | -Price               |
//            |______________________|
//             /        |            \
//            /         |             \
//    __Book____  __Food____________  __Drink___
//    | -Author | | -ExpirationDate | | -Liters |
//    |_________| |_________________| |_________|

int main()
{
	Shop myShop(2);

	Book* pMyBook= new Book( "Red Rising", 12.3, "Pierce Brown");
	Drink* pMyDrink= new Drink( "Gatorade", 2.12, 1);
	Food* pMyFood= new Food( "Lettuce", 0.50, 2018, 9, 21);

	myShop.AddProduct(pMyBook);
	myShop.AddProduct(pMyDrink);
	myShop.AddProduct(pMyFood);

	myShop.PrintAllBooks();
}

