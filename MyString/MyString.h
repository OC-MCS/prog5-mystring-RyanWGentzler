#pragma once
#include <iostream>

class MyString
{
private:
	char* str;
public:
	MyString();
	MyString(const char*);
	MyString(const MyString&);
	~MyString();
	void operator= (const MyString&);
	MyString operator+(MyString&);
	bool operator== (MyString&);
	const char* c_str();
};

