#include<iostream>

using namespace std;

//�������캯���ĵ���ʱ��:

//1��ʹ��һ���Ѿ������õĶ��� ��ʼ��һ���µĶ���

//2��ֵ���ݸ�����������ֵ

//3��ֵ��ʽ���ؾֲ�����

/*
class Stu
{
public:

	Stu()
	{
		cout << "Stu��Ĭ�Ϲ��캯������" << endl;
	}

	Stu(int age)
	{
		Age = age;
		cout << "Stu���вκ�������" << endl;
	}

	Stu(const Stu &s)
	{
		Age = s.Age;
		cout << "Stu�Ŀ�����������" << endl;
	}

	~Stu()
	{
		cout << "Stu��������������" << endl;
	}

	int Age;
};*/

/*
//1��ʹ��һ���Ѿ������õĶ��� ��ʼ��һ���µĶ���
void test()
{
	Stu s1(20);
	Stu s2(s1);

	cout << "s2������Ϊ: " << s2.Age << endl;
}

//2��ֵ���ݸ�����������ֵ
void tranv(Stu s)
{

}
void test1()
{
	Stu s;
	tranv(s);
}

//3��ֵ��ʽ���ؾֲ�����
Stu tranv2()
{
	//�����ֲ�����
	Stu s1;
	cout << (int*)&s1 << endl;
	return s1;
}

void test2()
{
	Stu s = tranv2();
	cout << (int*)&s << endl;
}
*/

/*
int main()
{
	//test();
	//test1();
	test2();

	system("pause");
	return 0;
}
*/


/*
class Stu
{
public:
	//�вι��캯��
	Stu(int a)
	{
		age = a;
		cout << "Stu���вι��캯��" << endl;
	}

	//�޲ι��캯��
	Stu()
	{
		cout << "Stu���޲ι��캯��" << endl;
	}

	//�������캯��
	Stu(const Stu &s)
	{
	//�����д����Stu���ԣ������� p��
		age = s.age;
		cout << "Stu�Ŀ�������" << endl;
	}

	int age;
};*/

//�޲ι��캯���ĵ���
/*void test1()
{
	Stu s;

}*/

//�вι��캯������
/*void test2()
{
	//���ŷ� 
	//Stu s1(20);
	//ע�� �ڵ����޲ι��캯��ʱ ���ɼ�����  ��������� ����������Ϊ��һ������������ ��--> Stu s1();
	
	//��ʾ��
	//Stu s2 = Stu(20);//Stu(20)�ڵ���дʱ ����Ϊ��������  �ڵ�ǰ���� ����֮�� �ᱻ��������
	//Stu s3 = Stu(s2);//��������

	//�����ÿ������캯�� ��ʼ���������� 
	//Stu(s3);  //�������Ὣ�����Ĺ��캯����Ϊ�� Stu s3 ����ʾ���еĿ������캯�������ض���

	//��ʽת����
	Stu s4 = 20; //�ȼ��� Stu s4 = Stu(20) -->  �вι���
	Stu s5 = s4; //��������

}*/

/*
int main()
{
	//test1();
	test2();

	system("pause");
	return 0;
}
*/

/*
class Student
{
public:
	//���캯��
	Student()
	{
		cout << "Student�Ĺ��캯������" << endl;
	}

	//��������
	~Student()
	{
		cout << "Student�����������ĵ���" << endl;
	}
};


void test()
{
	Student s;
}*/

/*
//���캯�����ڳ�ʼ��  ����������������
int main()
{
	//1�����캯��  ����(){}  �޷���ֵ ����void
	//2����������������ͬ
	//3�������в��� �����Գ�������
	//4��������ö���ʱ�Զ����ù��� �����ֶ�����  ��ֻ����һ��

	test();

	//1����������  ~����(){}  �޷���ֵ ����void
	//2��������ͬ����
	//3�������в���  ����������
	//4�������ڶ�������ǰ�Զ�����  �����ֶ� Ҳֻ�����һ��

	system("pause");
	return 0;
}
*/