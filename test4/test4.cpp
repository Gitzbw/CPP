#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
	int m = 20;
public:
	int x = 30;
};

class Son : public Base
{
public:
	int a = 10;

};

int main()
{
	//Person p;
	//cout << sizeof(Person) << endl;
	int a = 10;
	int b = ++(++a);
	Son s;
	cout << s.Base :: x << endl;


	return 0;
}