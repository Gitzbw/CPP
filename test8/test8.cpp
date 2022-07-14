#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
#include<functional>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};
class comparePerson
{
public: 
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age < p2.m_Age;
	}
};

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
void test()
{
	set<Person, comparePerson> s;
	Person p1("����", 23);
	Person p2("����", 27);
	Person p3("�ŷ�", 25);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
	}
}

int main()
{
	pair<int, int> p(3, 4);
	test();
	cout << negate<int>()(50) << endl;

	return 0;
}