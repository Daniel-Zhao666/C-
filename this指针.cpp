#include<iostream>
using namespace std;


class Student
{
public:
	Student(int weight)
	{
	//���βκͳ�Ա����ͬ����ʱ ������thisָ������������
		this -> weight = weight;
	}

	//��ȡ���÷��صķ�ʽ �Է�ֹ����ֵ������ɴ����µı���
	Student& StudentandStudent(Student stu)
	{
		this->weight += stu.weight;//thisָ�������ÿ����Ա������
		//���ض�����
		return *this;
	}

	int weight;
};

void show()
{
	Student stu(50);
	cout << "weight = " << stu.weight << endl;
}

void show1()
{
	Student stu1(30);
	Student Stu_new(30);
	Stu_new.StudentandStudent(stu1).StudentandStudent(stu1).StudentandStudent(stu1);
	cout << "Stu_new������Ϊ�� " << Stu_new.weight << endl;
}

/*
int main()
{
	//show();
	show1();

	system("pause");
	return 0;
}
*/