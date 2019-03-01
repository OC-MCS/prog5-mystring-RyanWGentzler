//=======================
// Ryan Gentzler
// Due 3/1/2019
// Desc: Remake String
//=======================
#include <iostream>
#include "MyString.h"
using namespace std;

MyString add(MyString, MyString);

int main()
{
	MyString s1 = "Hello", s2 = " World", s3, s4 = s1;

	cout << s1 << endl;
	cout << s2 << endl;

	if (s1 == s2)
	{
		cout << "Something is wrong here...\n";
	}
	else
	{
		cout << "s1 & s2 aren't equal\n";
	}

	s3 = add(s1, s2);

	cout << s3;

	return 0;
}

MyString add(MyString s1, MyString s2)
{
	MyString temp;
	temp = s1 + s2;
	return temp;
}