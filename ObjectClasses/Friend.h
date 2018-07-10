#pragma once

class Friend
{
	char* m_name;
	long long m_telephoneNumber;
	char* m_email;
public:
	Friend(const char* name, long long telephoneNumber, const char* email);
	Friend();
	~Friend();

	const char* Name();
	long long TelephoneNumber();
	const char* Email();

	void UpdateName(const char* name);
	void UpdateEmail(const char* email);
	void UpdateTelephoneNumber(long long number);

	void CopyFrom(Friend* pSrc);
};

