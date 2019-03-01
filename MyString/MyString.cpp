#include "MyString.h"
#include <iostream>
#include <iomanip>
using namespace std;


//Default constructor sets the ptr ready to be worked with
MyString::MyString()
{
	str = nullptr;
}

//Constructor that allows blah = "thingy" to work
MyString::MyString(const char* ptr)
{
	str = new char[strlen(ptr) + 1];
	strcpy_s(str, sizeof(ptr), ptr);
}

//Allows a string to be initialized with another string / Copy Constructor
MyString::MyString(const MyString& other)
{
	size_t size = strlen(other.str) + 1;
	str = new char[size];
	strcpy_s(str, size, other.str);

	cout << "Copy Constructor Called.\n";
}

//Destructor. Self explanitory
MyString::~MyString()
{
	cout << "Destructor called\n";
	delete[] str;
}

//Allows the = operator to work, doesn't return anything
void MyString::operator= (const MyString& other)
{
	if (this != &other)
	{
		delete[]str;
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, strlen(other.str) + 1, other.str);
	}
}

//Allows the + operator to work, returns a mystring
MyString MyString::operator+(const MyString& other)
{
	MyString temp;
	int SIZE = strlen(str) + strlen(other.str) + 1;

	temp.str = new char[SIZE];

	strcpy_s(temp.str, SIZE, str);
	strcat_s(temp.str, SIZE, other.str);

	return temp;
}

//Allows the boolean comparison of two strings, returns bool
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

//returns location of char* for the << operator.
const char* MyString::c_str()
{
	return str;
}

//allows the user to output the string.
ostream& operator<< (ostream& out, MyString& str)
{
	for (int i = 0; i < strlen(str.c_str()); i++)
	{
		out << str.c_str()[i];
	}
	return out;
}
