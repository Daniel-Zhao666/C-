#include<iostream>

using namespace std;

int* fun()
{
	int a = 0;
	return &a;

}

int main()
{
	int *p = fun();

	cout << "*p��ֵΪ: " << *p << endl;

	//��Ҫ���ֲ������ĵ�ַ�ŵ�ջ����������ִ����󣬻Ὣ���ͷŵ�
	cout << "*p��ֵΪ: " << *p << endl;

	system("pause");
	return 0;
}