#include<iostream>

using namespace std;

/*ָ��+���� --> ʵ��ð����������*/

void bubble_sort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void PrintArray(int arr[], int len)
{
	for (int x = 0; x < len ; x++)
	{
		cout << arr[x] << endl;
	}
}

void main()
{
	int arr[8] = {3,6,9,8,1,0,13,11};

	int length = sizeof(arr) / sizeof(arr[0]);

	cout << "����ǰ: " << endl;
	
	for (int x = 0; x < 8; x++)
	{
		cout << arr[x] << endl;
	}
	
	bubble_sort(arr, length);

	cout << "�����: " << endl;
	PrintArray(arr,length);

	system("pause");
}



/*
int add(int* p1, int* p2)
{
	int sum = 0;

	sum = *p1 + *p2;

	return sum;
}*/

//void main()
//{
//	/* ָ���뺯�� */
//	int a = 1;
//	int b = 2;
//
//	int sum = add(&a, &b);
//
//	cout << "sum��ֵΪ: " << sum << endl;

	//ָ���������
	/*int arr[6] = {1,2,3};

	int *p = arr;
	for (int i = 0; i < 3; i++)
	{
		cout << *p++ << endl;
	}*/

	 
	//int a = 1;
	//int b = 2;

	/*�ؼ�����const��������ŵ��Ǳ���������ָ�룬(const + p)-->ָ�볣���� (const +  *p) -->����ָ�� 
	*/

	//C++�е���������ȼ�Ϊ��ֵ�����(= += ) > ��Ŀ�����(* --> ָ�� &)  

	//const int * p = &b;//const ���ε�ָ��������ɱ����ģ���ָ���ָ����Ա��޸ģ�����ָ�룩
	//���Ϊ*����p��� = ָ�룬��b�ĵ�ַȡ����ֵ��*p, Ȼ�����const int ����

	//int * const p = &a;//ָ�볣�����ص��ڳ�����ֵ���Ա��޸ģ���ָ���ָ�򲻿ɱ��޸ģ�
	//���Ϊ const��ͬp��� = ���� int*Ϊ����ָ�� ָ��p�е����ݣ�a�ĵ�ַ��
//	*p = 3;

	//cout << "a��ֵΪ��" << a << endl;

	/*��ָ��������ʼ��ָ�������NULL��Ӧ���ڴ�ռ䲻�ɱ�����*/
	/*Ұָ����ָ��Ŀռ䲻�ɱ�����*/
	//��32byte��ƽ̨�£���������������ʲô��ָ����ռ���ڴ��С��Ϊ4byte
	//64byte�µ�ָ����ռ�ڴ��СΪ8byte
	/*
	int a = 6;
	
	int * p;

	p = &a;

	cout << &a << endl;
	cout << p << endl;

	*p = 3;
	cout << "*p= "<< *p << endl;
	*/

//	system("pause");
//}