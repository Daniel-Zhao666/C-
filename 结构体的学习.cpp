#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubblesort(struct Hero HArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j���±��Ԫ��������� j+1 ��Ԫ�ص����䣬��������Ԫ��
			if (HArray[j].age > HArray[j+1].age)
			{
				struct Hero temp = HArray[j];
				HArray[j] = HArray[j + 1];
				HArray[j + 1] = temp;
			}
		}
	}
}

/*��ӡ��*/
void printHero(struct Hero HArray[], int len)
{
	cout << "������ӡ" << endl;

	for (int i = 0; i < len; i++)
	{
		cout << "����: " << HArray[i].name << "����: " << HArray[i].age << "�Ա� " << HArray[i].sex << endl;
	}
	
}

void main()
{
	struct Hero HArray[5] = 
	{
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	};
	
	int len = sizeof(HArray) / sizeof(HArray[0]);

	cout << "����ǰ�Ĵ�ӡ: " << endl;

	for (int i = 0; i < len; i++)
	{
		cout << "����: " << HArray[i].name << " ����: " << HArray[i].age << " �Ա�: " << HArray[i].sex << endl;
	}

	bubblesort(HArray, len);

	
	printHero(HArray,len);

	system("pause");
}



/*struct student
{
	string studentname;
	int score;
};

struct Teacher
{
	string teachername;
	string studentname;
	struct student SArray[5];
};*/

/*void printInfo(struct Teacher TArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����: " << TArray[i].teachername << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������: " << TArray[i].SArray[j].studentname << "������" <<
				TArray[i].SArray[j].score << endl;
		}

	}
}
*/

/*Ϊ��ʦ�Լ�ѧ����������и�ֵ�ĺ���*/
//void Space(struct Teacher TArray[], int len)
//{
//	string nameSeed = "abvgh";
//	//����ʦ����Ϣ���и�ֵ(�����Լ�����Ϣ������ѧ������Ϣ)
//	for (int i = 0; i < len; i++)
//	{
//		TArray[i].teachername = "Teacher_";
//		TArray[i].teachername += nameSeed[i];
//
//		/*Ϊÿ����ʦ������ѧ����Ϣ���и�ֵ*/
//		for (int j = 0; j < 5; j++)
//		{
//			/*ѧ����Ϣ�ĸ�ֵ*/
//			TArray[i].SArray[j].studentname = "Student_";
//			TArray[i].SArray[j].studentname += nameSeed[j];
//
//			int random = rand() % 61 + 40;
//			TArray[i].SArray[j].score = random;
//		}
//	}
//}



//void main()
//{
//	/*�������������*/
//	srand((unsigned int)time(NULL));
//	/*������ʦ������*/
//	struct Teacher TArray[3];
//
//	/*ͨ������Ϊ������ʦ����Ϣ���и�ֵ���Լ���ѧ����ϢҲ��ֵ*/
//	int len = sizeof(TArray) / sizeof(TArray[0]);
//	Space(TArray,len);
//
//	/*string SArray[5] = {};*/
//	printInfo(TArray, len);
//
//	system("pause");
//}

/*struct stu
{
	//��Ա�б�
	string name;
	int age;
	string height;
	string weight;

};

struct teacher 
{
	int id;
	int age;
	string profession;
	struct stu s;
};

void printstu(const struct stu * p)
{
	//const ���νṹ�����ʱ���ᱻ����޸Ľṹ���ڲ���Ԫ��
	//p->name = "Do";

	cout << "ѧ��������: " << p->name << " ѧ�����: " << p->height << endl;
}*/



//void main()
//{
//
//	/*�ṹ�崫��������*/
//    struct stu s;
//	s.name = "Hello";
//	s.age = 23;
//	s.height = "180cm";
//
//	printstu(&s);//��ַ���� �βο����޸�ʵ�ε�ֵ
//
//	cout << "ѧ������: " << s.name << endl;

	/*�ṹ��Ƕ�׽ṹ��*/
	/*teacher t;
	t.id  = 2013111666;
	t.age = 36;
	t.profession = "��������";
	t.s.name = "Hello";

	cout << "��ʦ�Ĺ���:" << t.id << " ��ʦ��רҵ: " << t.profession << " ��ʦ����ѧ��������: " << t.s.name << endl;
	*/


	/*�ṹ��ָ��*/
	/*struct stu s = {"���", 20, "180cm","75kg"};

	struct stu *p = &s;

	cout << "������" << p->name << " ���䣺" << p->age << " ���:" << p->height << " ���أ�" << p->weight << endl;
	*/


	//�����ṹ�����
	/*struct stu s1;
	s1.name = "Hello";
	s1.age = 20;
	s1.height = "180cm";
	s1.weight = "60kg";

	cout << "����: " << s1.name << "����: " << s1.age << "���: "
		<< s1.height << "����: " << s1.weight << endl;*/

//	system("pause");
//}