#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString s1 = "Hello", s2 = " World", s3, s4 = s1;

	//s3 = s1 + s2;
	//This is bugging out at run time because there isn't enough room in the array (which it should have because it's dynamically allocated)

	if (s1 == s2)
	{
		cout << "Something is wrong here...";
	}
	else
	{
		cout << "s1 & s2 aren't equal";
	}

	s2 = s1;

	//cout << s1;
	//cout isn't working because it doesn't recognize the overloaded << operator
}