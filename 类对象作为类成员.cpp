#include<iostream>
#include<string>

using namespace std;


class Computer
{
public:
	Computer(string Logo)
	{
		logo = Logo;
		cout << "Computer�Ĺ��캯������" << endl;
	}

	~Computer()
	{
		cout << "Computer��������������" << endl;
	}

	string logo;

};

class Stu
{
public:
	Stu(string name, string Logo) : Name(name), computer(Logo)
	{
		cout << "Stu�Ĺ��캯������" << endl;
	}

	~Stu()
	{
		cout << "Stu��������������" << endl;
	}

	//����
	string Name;

	//�ڱ����д�����������ĳ�Ա  �ڹ��캯������ʱ�ȵ��õ��´�����������
	//����
	Computer computer;

	//����ʱ ��˳��͹����෴
};

void cs1()
{
	Stu s("���", "ASUS");
	
	cout << "***: " << s.Name << " ӵ��: " << s.computer.logo << endl;
}

/*
int main()
{
	cs1();

	system("pause");
	return 0;
}*/