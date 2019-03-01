#include "MyString.h"
#include <iostream>
#include <iomanip>
using namespace std;

MyString::MyString()
{
	str = nullptr;
}

MyString::MyString(const char* ptr)
{
	str = new char[strlen(ptr) + 1];
	strcpy_s(str, sizeof(ptr), ptr);
}

MyString::MyString(const MyString& other)
{
	size_t size = strlen(other.str) + 1;
	str = new char[size];
	strcpy_s(str, size, other.str);

	cout << "Constructor Called.\n";
}

MyString::~MyString()
{
	cout << "Destructor called\n";
	delete[] str;
}

void MyString::operator= (const MyString& other)
{
	if (this != &other)
	{
		delete[]str;
		str = new char[sizeof(other.str) + 1];
		strcpy_s(str, sizeof(other.str) + 1, other.str);
	}
}

MyString MyString::operator+(const MyString& other)
{
	MyString temp;
	const int SIZEOF1 = sizeof(str), SIZEOF2 = sizeof(other.str);

	temp.str = new char[SIZEOF1 + SIZEOF2];

	strcpy_s(temp.str, SIZEOF1, str);
	strcat_s(temp.str, SIZEOF2, other.str);

	return temp;
}

bool MyString::operator== (MyString& other)
{
	bool result = true;
	int i = 0;
	
	if (strlen(str) != strlen(other.str))
	{result = false;}
	else
	{ 
		while (result && i < strlen(str))
		{
			if (str[i] != other.str[i])
			{
				result = false;
			}

			i++;
		}
	}

	return result;
}

const char* MyString::c_str()
{
	return str;
}

ostream& operator<< (ostream& out, MyString& str)
{
	for (int i = 0; i < strlen(str.c_str()); i++)
	{
		out << str.c_str()[i];
	}
	return out;
}
