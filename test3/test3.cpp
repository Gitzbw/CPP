#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int func2(int a , int b);
int func2(int a = 10, int b =10) {
	return a + b;
}


class Circle 
{
public:
	Circle()
	{
		cout << "���캯��������" << endl;
	}

	Circle(const Circle& c)
	{
		cout << "�������캯��������" << endl;
	}

	~Circle()
	{
		cout << "���캯��������" << endl;
	}


	static int a;
};

int Circle::a = 20;

Circle doWork()
{
	Circle c;
	return c;
}

int main()
{
	Circle c;
	cout << c.a << endl;


	return 0;
}