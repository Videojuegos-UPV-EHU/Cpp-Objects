#include "stdafx.h"
#include "Friend.h"
#include <string>

Friend::Friend()
{
	m_name = nullptr;
	m_telephoneNumber = 0;
	m_email = nullptr;
}

Friend::Friend(const char* name, long long telephoneNumber, const char* email)
{
	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);

	m_telephoneNumber = telephoneNumber;

	m_email = new char[strlen(email) + 1];
	strcpy_s(m_email, strlen(email) + 1, email);
}


Friend::~Friend()
{
	if (m_name != nullptr)
		delete[] m_name;
	if (m_email != nullptr)
		delete[] m_email;
}

const char* Friend::Name()
{
	return m_name;
}

long long Friend::TelephoneNumber()
{
	return m_telephoneNumber;
}

const char* Friend::Email()
{
	return m_email;
}

void Friend::UpdateName(const char* name)
{
	if (m_name != nullptr) delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);
}
void Friend::UpdateEmail(const char* email)
{
	if (m_email != nullptr) delete[] m_email;
	m_email = new char[strlen(email) + 1];
	strcpy_s(m_email, strlen(email) + 1, email);
}
void Friend::UpdateTelephoneNumber(long long number)
{
	m_telephoneNumber = number;
}

void Friend::CopyFrom(Friend* pSrc)
{
	//copy the name
	if (m_name != nullptr) delete[] m_name;
	m_name = new char[strlen(pSrc->Name()) + 1];
	strcpy_s(m_name, strlen(pSrc->Name()) + 1, pSrc->Name());

	//copy the telephone number
	m_telephoneNumber = pSrc->TelephoneNumber();

	//copy the email
	if (m_email != nullptr) delete[] m_email;
	m_email = new char[strlen(pSrc->Email()) + 1];
	strcpy_s(m_email, strlen(pSrc->Email()) + 1, pSrc->Email());
}