#include <iostream>

using namespace std;

int main()
{
	int a = -2, b = 5, c = 6, d;
	d = b++ ^ (a + c) % 3; //a=  ,b=  , c=  ,d=
	b = ++a + c - b % 3; //a=  ,b=  , c=  ,d=
	d = (b += c) + 6; //a=  ,b=  , c=  ,d=
	b = a << c; //a=  ,b=  , c=  ,d=
	return 0;
}