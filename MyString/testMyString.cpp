#include <iostream>
#include "MyString.h"
using namespace std;

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

	s3 = s1 + s2;

	cout << s3;

}