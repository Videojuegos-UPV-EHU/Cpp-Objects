// ObjectClasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Friend.h"
#include "Agenda.h"

int main()
{
	Agenda myAgenda(2);

	Friend friend1("Arturo", 123, "art@gmail.com");
	Friend friend2("Emilia", 232, "emilia@hotmail.com");
	Friend friend3("Jacinto", 3222, "jacinto@hotmail.com");
	myAgenda.AddFriend(&friend1);
	myAgenda.AddFriend(&friend2);
	myAgenda.AddFriend(&friend3);

	myAgenda.Print();

	//Uncomment once the methods are implemented
	//myAgenda.Save("myagenda.txt");
	myAgenda.Clear();
	//myAgenda.Load("myagenda.txt");

	myAgenda.Print();

    return 0;
}

