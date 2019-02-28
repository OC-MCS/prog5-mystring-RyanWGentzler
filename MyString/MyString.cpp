#include "MyString.h"
#include <iostream>
#include <iomanip>
using namespace std;

MyString::MyString()
{

}

MyString::MyString(char* ptr)
{

}

MyString::MyString(const MyString& other)
{
	int size = strlen(other.str) + 1;
	str = new char[size];
	strcpy_s(str, size, other.str);
}

MyString::~MyString()
{

}

void MyString::operator= (MyString& other)
{
	if (this != &other)
	{
		delete[]str;
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, strlen(other.str), other.str);
	}
}

MyString MyString::operator+(MyString& other)
{

}

bool MyString::operator== (MyString& other)
{

}

char* MyString::c_str()
{

}

ostream& MyString::operator<< (ostream& out, const MyString& str)
{
	cout << *str;
	return out;
}
