#include<iostream>

using namespace std;

class Phone
{
public:
	int x;//�Ǿ�̬��Ա������������Ķ�����

	static int y;//��̬��Ա���� �������� �����ʼ��   ��������Ķ�����

	void function() {};//�Ǿ�̬��Ա��������������Ķ�����
	static void function1(){};//��̬��Ա��������������Ķ�����
};
//int Phone::y = 0;

void adjust()
{
	Phone p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ  1
	//C++�ı��������ÿ���ն������һ��byte�Ŀռ� ���Ա����ֿն�����ռ���ڴ�λ��
	//�ն��� Ӧ��һ����һ�޶����ڴ��ַ

	cout << "sizeof(p) = " << sizeof(p) << endl;
}

void adjust1()
{
	Phone ph;
	cout << "sizeof ph = " << sizeof(ph) << endl;

}

/*
int main()
{
	//adjust();
	adjust1();

	system("pause");
	return 0;
}*/