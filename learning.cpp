#include<iostream>

using namespace std;

//���õ�ʹ�ó���
void ShowValue(const int& v)
{
	//v = 1;//�൱�ڳ���ָ�룬���ɶ�ָ��ָ��ĵ�ַ�д�ŵ�ֵ�����޸�
	cout << v << endl;
}

int main()
{
	//int& ref = 1;//������Ҫ����һ���Ϸ��Ŀռ�

	const int& ref = 1;//const����������Ż����룬int temp = 1; const int& ref = temp;

	//ref = 2;//���� --�������޸�ֵ

	//����������const���ã��Է�ֹ������޸�ʵ��
	int a = 10;
	ShowValue(a);

	system("pause");
	return 0;
}

/*void swap1(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//���õĴ���
void swap2(int& x , int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

//�����������ķ���ֵ
//ע����Ҫ���ؾֲ�����������
int& test1()
{
	int a = 1;//�ֲ���������� ջ��
	return a;//����һ�����õ�ֵ
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test2()
{
	//ȫ�����еľ�̬�������������������н�����ϵͳ���ͷ�
	static int a = 1;
	return a;

}*/



//int main()
//{
//	int a = 1;
//	int b = 0;
	//const int* p = &a;//����ָ��(��ָ��)�������ǳ�����const��ǰ�������������ָ��ĵ�ַ
	//ָ��ķ�����Ա��޸ģ� ָ��ָ���ֵ���ɱ��޸�
	
	// *p = 2;//����
	//p = &b;//��ȷ  ָ���ָ����Ա��޸�

 //	int* const p1 = &a;//ָ�볣��(������ָ��)����ʱconst���ε���ָ����ָ��ĵ�ַ�����ɸ��ģ�
	//��������ֵ���Ա��޸� ��ָ��ķ��򲻿ɱ��޸�
  //	*p1 = 1; //��ȷ

	//p1 = &a; // ����

//	cout << "*p1= " << *p1 << endl;

	//int &ref = test1();
	//cout << "ref= " << ref << endl;//����������һ�α���
	//cout << "ref= " << ref << endl;//����a�еľֲ��������ͷţ����½������

	/*int& ref = test2();
	cout << "ref= " << ref << endl;
	cout << "ref= " << ref << endl;*/

	//���������ÿ�����Ϊ��ֵʹ��
	//test2() = 2;
	//cout << "ref= " << ref << endl;

	/*int a = 1;
	int b = 2;
	cout << "����ǰa = " << a << endl;
	cout << "����ǰb = " << b << endl;*/

	//swap1(&a, &b);
	//cout << "��ַ������a: " << a << endl;
	//cout << "��ַ������b: " << b << endl;


	//swap2(a,b);
	//cout << "���ý�����a: " << a << endl;
	//cout << "���ý�����b: " << b << endl;



	//���ñ����ʼ��,��ʼ���󲻿��Ա��ı�

	//int &b;
	//int c = 10;

	////���ã�  �������� &���� = ԭ��
	//int &b = a;
	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;

	//b = 2;

	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;

//	system("pause");
//
//	return 0;
//}