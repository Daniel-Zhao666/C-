#include<iostream>
#include<string>

using namespace std;//�ռ�

#define Year 365

int main()
{

	/*cout << "һ������:" << Year << "��" << endl;//ƴ��*/
	/*cout << "hello world!" << endl*/

	//float f1 = 2.3f;//�� "f" ��ʾ��Ч����Ϊ������,������ܻᵼ�¾���ȱʧ(double -> float)

	//cout << "f1�ľ��ȴ�ӡ" << f1 << endl;

	//double d1 = 2.312368;//Ĭ�������Ϊ˫���� double

	//cout << "d1�ľ�����ʾ" << d1 << endl;//Ĭ�ϴ�ӡ����Ч����Ϊ "6"

	/*char ch1 = 'a';//ע��ֻ���õ�����
	char ch2 = 'A';//�������ַ����ɶ�
	char ch3 = '0';*/
	/*cout << "char���͵ı����ڴ�����ռ��С"<< sizeof(char) << endl;*/

	/*cout << (int)ch1 << endl;//97(�ڴ��ж�Ӧ��ASCII��ֵ)
	cout << (int)ch2 << endl;//65
	cout << (int)ch3 << endl;//48
	*/
	

	/*char str[] = "welcome to CDUT";
	cout << str << endl;
	*/

	/*string str2 = "hello CDUT";
	cout << str2 << endl;
	*/


	//bool flag = true;
	//cout << flag << endl;

	//flag = false;//�����ظ�����
	//cout << flag << endl;

	//cout << "bool��ռ��С��" << sizeof(flag) << endl;

	//string str;
	//cout << "�������ַ����ı���:" << endl;
	//
	//cin >> str;
	//cout << str << endl;

	/*bool flag = true;
	cout << "������bool���͵�����" << endl;
	
	cin >> flag;
	cout << flag << endl;*/

	/*int a = 1;
	int b = (a++) * 2;
	cout << "a��ֵΪ=" << a << endl;
	cout << "b��ֵ=" << b << endl;*/

	/*
	int c = 3;
	int d = (--c) % 3;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;//ǰ������Ϊ�Ƚ��п�ʼ�ַ����������ʽ�����������෴
	*/

	int a = 1;
	    a %= 10;
	cout << "a=" << a << endl;


    system("pause");//��ͣ
	return 0;

}