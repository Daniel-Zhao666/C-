#include<iostream>

using namespace std;

// .cpp�ļ��еĺ����н��о���Ĺ���ʵ��
//����.h�ļ��б�ﺯ��������

/*������������Ҫ���õĺ���֮ǰ*/
//�������������к�����Ĳ���
//ͬһ�������Ķ������ҽ���һ�Σ���������Զ��ʹ��

int mim(int x, int y)
{
	
	if (x > y )
	{
		return y;
	}
	else 
	{
		return x;
	}
}

/*int sum(int a, int b)
{
	//a��b�β� --> ��������main�����д�������ʵ��
	int c = a + b;
	return  c;//�������ݵ�����ͬ���������ͱ�����ͬ
}*/



/*
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << "������x��ֵ: " << x << endl;
	cout << "������y��ֵ: " << y << endl;

}
*/


void main()
{
	int a = 100;
	int b = 200;

	int c = mim(a, b );

	cout << "��СֵcΪ: " << c << endl;

	/*
	//�ڴ�ֵ�����У��βεĸı䲢����ı�ʵ�ε�ֵ
	int a = 1;
	int b = 3;

	cout << "����ǰa��ֵ: " << a << endl;
	cout << "����ǰb��ֵ: " << b << endl;

	swap(a, b);

	cout << "������a��ֵ: " << a << endl;
	cout << "������b��ֵ: " << b << endl;
	*/


	/*��ֵ����  �����ڴ�ַ���ã���ֹ���ݱ��޸�ʱʹ�ã����������ݵ������*/
	//x��yΪʵ��
	/*int x = 1;
	int y = 2;
	
	int	c = sum(x, y);
	cout << "c= " << c << endl;
	*/
	system("pause");
	//return 0;
}
