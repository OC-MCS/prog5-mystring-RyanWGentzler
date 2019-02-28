#pragma once
#include <iostream>

class MyString
{
private:
	char* str;
public:
	MyString();
	MyString(char*);
	MyString(const MyString&);
	~MyString();
	void operator= (MyString&);
	MyString operator+(MyString&);
	bool operator== (MyString&);
	char* c_str();
	ostream& operator<< (ostream&, const MyString&);
};

