#include<iostream>
#include<string>

using namespace std;

class Stu
{
public:

	//д ���� 
	void SetName(string name)
	{
		Name = name;
	}

	//�� ����
	string GetName()
	{
		return Name;
	}

	//����ֻ��
	int GetAge()
	{
		Age = 0;
		return Age;
	}


private:
	//��Ҫ�� �� �ڲ��ĳ�Ա���з��ʵ�ʱ�� ͨ����˽��Ȩ��֮ǰ����ӿ� ����Ա������ʵ��
	//nameȨ�� -->�ɶ�д
	string Name;

	// age -> ֻ��
	int Age;


};

/*
int main()
{

	Stu s1;

	s1.SetName("Hello");

	cout << "����Ϊ��" << s1.GetName() << endl;

	cout << "����Ϊ: " << s1.GetAge() << endl;
	

	system("pause");
	return 0;
}
*/

//����һ��ѧ����
/*class Student
{
	//Ȩ������
	//����Ȩ�� ����Ȩ��
     public:
		 //����  ��Ա����
		 //������ѧ��
		 string Name;
		 int id;

		 //��Ϊ��
		//��Ա���� ���ú�������ʵ��
		//��ѧ����������ѧ�Ž��и�ֵ������ʾ����
		 void Show()
		 {
			 cout << "����: " << Name << "ѧ��: " << id << endl;
		 }

		 //����ͨ������Ϊ���޸���ʵ�������Ե��޸�
		 void SetName(string name)
		 {
			 Name = name;
		 }

		 void SetId(int Id)
		 {
			 id = Id;
		 }

		 //class�������ı���Ĭ��Ȩ��Ϊ˽��
		 //struct �����ı�����Ĭ��Ȩ��Ϊ���� ���Է��� 

		 //��Ա���Ե�˽�л�   1�����п��ɳ���Ա�����������д����
		 //2������дȨ�� ���Լ�����ݵ���Ч��


};*/



/*int main()
{
	//����һ������ѧ����Ķ���
	//ͨ�������ʵ��������
	Student s1;
	//���Ը�ֵ
	//s1.Name = "hello ";
	//s1.id = 123;

	s1.SetName("Good ");

	s1.SetId(123);

	s1.Show();

	system("pause");
	return 0;
}*/