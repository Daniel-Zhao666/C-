#include<iostream>

using namespace std;

//�������� -->> ע������
//1������Ҳ����Ϊ���ص�����
//2������������������Ĭ�ϲ���

void hanshu(int &a)
{
	cout << "hanshu(int &a)�ĵ��� " << endl;
}

//+ const �൱�ڳ���ָ�� ������ֵ���ܱ��޸�
void hanshu(const int &a)
{
	cout << "hanshu(const &a)�ĵ��� " << endl;
}


void add(int a , int b = 2)
{
	cout << "add������a��b�ĵ���" << endl;
}

void  add(int a )
{
	cout << "add����a�����ĵ���" << endl;
}

int main()
{
	//int a = 1;
	//hanshu(a);

	//const �Ὣ��������Ż� --->> ����һ���м������Ŵ����ʵ��
	//hanshu(10);

	//add(1);//���ֶ����ԣ����±������޷����־�����õĺ���
	system("pause");
	return 0;
}

//�������������������
//1��������Ϊͬһ�� ������ȫ����������
//2��������������ͬ
//3�������Ĳ�����ͬ�����߸�����ͬ������˳��ͬ

//void Div(int a,  double b)
//{
//	cout << "a / b = " << a / b << endl;
//}
//
//void Div(int a, int b)
//{
//	cout << "a / b = " << a / b << endl;
//}
//
//void Div(double a, int b)
//{
//	cout << "a / b = " << a / b << endl;
//}



//�����ķ���ֵ������Ϊ�������ص�����
//double Div(int a, double b)
//{
//	cout << "a / b = " << a / b << endl;
//}

//������ռλ���� --> �����ں�����ֻ���βε��������ͣ��������о��帳ֵ����
//void Swap(int a, int);

//�ں���������������в�������ôʵ�ֵĺ�����������Ĭ�ϲ���
//����������ʵ�����ҽ���һ����Ĭ�ϲ���

//int add(int a ,int b , int c);

//C++�п����ں�����ʵ���У�ֱ�Ӷ��βν��и���ֵ
//����ں�����ĳ��λ�ò�����Ĭ��ֵ����ô�Ӹ�λ�����󣬴������ҵĲ���������Ҫ��Ĭ��ֵ
/*int add(int a = 1, int b = 2, int c =3)
{
	 return  a + b + c; 
}*/

/*int main()
{
	//Div(1, 3.0);
	//Div(3.0, 1);
	Div(1,1);

	//����ں��������и���ֵ����ô�ں���ʵ���а���������ʵ��Ϊ׼��ʵ��
	//int ret = add(2,3,4);

	//cout << ret << endl;

	system("pause");
	return 0;
}*/