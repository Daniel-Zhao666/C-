#include<iostream>

using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϻ�������" << endl;
	}

	Person(int id, int w)
	{
		ID = id;
		weight = new int(w);//��������ı����ŵ�����
		cout << "Person���вκ�������" << endl;
	}

	//�µĿ������캯��
	Person(const Person &p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		ID = p.ID;
		//weight = p.weight;//������Ĭ�Ͽ��������
		//���
		weight = new int(*p.weight);
	}

	~Person()
	{
		//�������� ���������ٵ��������ͷŲ���
		if (weight != NULL)
		{
			delete weight;
			weight = NULL;
		}
		//���¶������ظ��ͷ�  <-- ǳ��������
		//��� --> ����취�� ���¿���һ���ռ�������ͬ�������ͷŽ��д��(��дһ���������캯��)
		//���������ͷŵĹ����Ƚ����

		cout << "Person��������������" << endl;

	}

	int ID;
	int *weight;
};

void cs()
{
	
	Person p1(106, 180);
	Person p2 = Person(p1);

	cout << "p1��IDΪ: " << p1.ID << " ����Ϊ: "<< *p1.weight <<  endl;
	cout << "p2��IDΪ: " << p2.ID << " ����Ϊ: "<< *p2.weight <<  endl;

}
/*
int main()
{
	cs();


	system("pause");
	return 0;
}*/