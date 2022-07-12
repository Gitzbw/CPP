#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Person.hpp"
using namespace std;

template<class T>
class Glo
{
	friend void func(Glo<T>& g)
	{
		
	}

public:
	int age;
};

template<typename T>
void test(T t[])
{
	
}
//void test(T t)
//{
//
//}




int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	test(arr1);
	Person<string,int> p("a",1);
	p.showPerson();
	Glo<int> glo;
	func(glo);
	


	return 0;
}