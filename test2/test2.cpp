#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
}stu3;

void test(int& a)
{
	cout << &a << endl;
}

int& show()
{
	static int a = 10;
	return a;
}

int main()
{
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;  //ָ�������ָ��

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << p[i] << endl;
		
	}

	
	
	string a = "abcde";
	//cout << a[2];
	

	int mm = 10;
	cout << &mm << endl;
	test(mm);
	cout << "----------------\n";

	int n = 10;
	int& nn = n;
	cout << &n << endl;
	cout << &nn << endl;
	const int* y = &n;
	cout << *y << endl;
	int yy = show();
	show() = 30;
	cout << "----------\n";
	cout << yy << endl;

	


	return 0;
}