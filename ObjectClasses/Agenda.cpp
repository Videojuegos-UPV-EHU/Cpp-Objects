#include "stdafx.h"
#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::Agenda(int maxNumFriends)
{
	m_friends = new Friend[maxNumFriends];
	m_numFriends = 0;
	m_maxNumFriends = maxNumFriends;
}


Agenda::~Agenda()
{
	delete[] m_friends;
}

void Agenda::AddFriend(Friend* pFriend)
{
	if (m_numFriends >= m_maxNumFriends)
		return;

	m_friends[m_numFriends].CopyFrom(pFriend);

	m_numFriends++;
}

void Agenda::Print()
{
	for (int i = 0; i < m_numFriends; i++)
	{
		cout << m_friends[i].Name() << "," << m_friends[i].TelephoneNumber() << "," << m_friends[i].Email() << "\n";
	}
}

void Agenda::Clear()
{
	m_numFriends = 0;
}