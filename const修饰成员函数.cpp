#include<iostream>

using namespace std;

class Table
{
public:
	//������
	//this ָ��ı����� ָ�볣�� ��ָ���ָ�򲻿ɱ��ı�
	void showtab() const
	{
		//����const�൱�� const Table * const this --> ������ָ��ָ���ֵҲ���ɱ��޸�
		//this -> len = 100;
		//this = NULL;//���ɷ����Ѿ����޸ĵ�ָ��ķ��� Table * const this
		this->width = 10;
	}

	void func(){};

	int len;
	//������ ����   mutable  ����ڳ������п����޸�
	mutable int width;


};

void testshow()
{
	//������Ҳ�ɱ��޸�
	const Table tab;
	
	//tab.len = 1;
	tab.width = 20;

	//������ֻ�ɵ��ó�����
	tab.showtab();

	//tab.func();�����󲻿ɵ�����ͨ��Ա��������ͨ��Ա���������޸ĳ�Ա�����ԣ�

}

/*
int main()
{

	
	system("pause");
	return 0;
}*/