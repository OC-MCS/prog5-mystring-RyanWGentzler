#pragma once
#include <iostream>
using namespace std;

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
	MyString operator+(const MyString&);
	bool operator== (MyString&);
	const char* c_str();
};

ostream& operator<< (ostream& out, MyString& str);
