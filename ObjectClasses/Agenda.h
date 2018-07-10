#pragma once

#include "Friend.h"

class Agenda
{
	Friend *m_friends;
	int m_numFriends;
	int m_maxNumFriends;
public:
	Agenda(int maxNumFriends = 256);
	~Agenda();

	void Save(const char* filename);
	void Load(const char* filename);
	void AddFriend(Friend* pFriend);
	void Clear();
	void Print();
};

