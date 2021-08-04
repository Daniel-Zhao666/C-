#include<iostream>
#include<string>

#define MAX 1000

using namespace std;

/*�����˵���*/
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳���ϵͳ  *****" << endl;
	cout << "***************************" << endl;
}

/*������ϵ�˵Ľṹ��*/
struct person
{
	string Name;
	int Sex;
	int Age;
	string Phone;
	string Addr;
};

/*ͨѶ¼�Ľṹ��*/
struct Addressbooks
{
	/*ͨѶ¼�б�����ϵ�˵�����*/
	struct person Personarray[MAX];

	/*��¼�µ�ǰͨѶ¼�е���ϵ�˸���*/
	int size;
};

/*�����ϵ�˵ĺ���*/
void Addperson(Addressbooks *abs)
{
	//��ѡ�ж�ͨѶ¼�Ƿ���������������������������
	if (abs->size == MAX)
	{
		cout << "�����������޷��������" << endl;
		return;
	}
	else
	{
		//��ʼ�����ϵ��
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->Personarray[abs->size].Name = name;
	}

	//�������Ա�
	cout << "�������Ա�" << endl;
	cout << "1���� " << endl;
	cout << "2��Ů " << endl;

	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->Personarray[abs->size].Sex = sex;
			break;
		}
		cout << "����������������룡" << endl;
	}


	//����������
	cout << "���������� " << endl;
	int age = 0;
		cin >> age;
		abs->Personarray[abs->size].Age = age;


	//��������ϵ�绰
	cout << "������绰��" << endl;
	string phone;
	cin >> phone;
	abs->Personarray[abs->size].Phone = phone;

	//�������ַ
	cout << "�������ַ: " << endl;
	string address;
	cin >> address;
	abs->Personarray[abs->size].Addr = address;

	//����ͨѶ¼������
	abs->size++;

	cout << "�����ϵ�˳ɹ�" << endl;

	//�����Ϣ�ɹ�����Ҫ����Ļ
	system("pause");
	system("cls");
}


//2����ʾ��ϵ��
void ShowPerson(Addressbooks *abs)
{
	//�жϵ�ǰ��ͨѶ¼����û����ϵ��
	if (abs ->size ==0)
	{
		cout << "��ǰͨѶ¼��û����ϵ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "����: " << abs->Personarray[i].Name << "\t";
			cout << "�Ա�: " << (abs->Personarray[i].Sex  == 1 ? "��":"Ů") << "\t";
			cout << "����: " << abs->Personarray[i].Age << "\t";
			cout << "�绰: " << abs->Personarray[i].Phone << "\t";
			cout << "��ַ: " << abs->Personarray[i].Addr << endl;

		}

	}
	system("pause");
	system("cls");

}

//�ж���ϵ���Ƿ����
/*��ͨѶ¼�ĵ�ַ�� ���ȶԵ���ϵ������Ҳ��Ϊ����*/

int IsExist(Addressbooks *abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		//�ҵ��û�������
		if (abs->Personarray[i].Name == name)
		{
			return i;//�ҵ��ͷ�����������ڵ��±�
		}
	}
	/*���û�ҵ�*/
	return -1;//����������û�ҵ� ��ô���� -1
}

//ɾ����ϵ��
void DelPerson(Addressbooks *abs)
{
	cout << "��������Ҫɾ������ϵ�� " << endl;
	string name;
	cin >> name;

	/*  ret == -1  δ�鵽  
	    ret != -1  �鵽�� */
	int ret = IsExist(abs, name);

	if (ret != -1)
	{
		//�Ѿ��鵽��ϵ��,������ɾ��
		for (int i = ret; i < abs->size; i++)
		{
			/*���ݵ�ǰ�� >����ǰһ����ַ�ϵ����� */
			abs->Personarray[i] = abs->Personarray[i + 1];
		}
		abs -> size--;
		cout << "ɾ���ɹ� " << endl;
	}
	else
	{
		cout << "δ�鵽��ϵ��" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void FindPerson(Addressbooks *p)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�Ҫ�ҵ���ϵ���Ƿ����
	int ret = IsExist(p, name);
	if (ret != -1)
	{
		cout << "����: " << p->Personarray[ret].Name << "\t";
		cout << "�Ա�: " << p->Personarray[ret].Sex << "\t";
		cout << "����: " << p->Personarray[ret].Age << "\t";
		cout << "�绰: " << p->Personarray[ret].Phone << "\t";
		cout << "��ַ: " << p->Personarray[ret].Addr << endl;
	}
	else
	{
		//û���ҵ���Ҫ�ģ���ϵ��
		cout << "û�ҵ���Ҫ�ҵ���ϵ��" << endl;
	}
	system("pause");
	system("cls");

}


//�޸���ϵ��
void ModefyPerson(Addressbooks *p)
{
	cout << "��������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = IsExist(p, name);
	//�ҵ���Ҫ�ĵ���ϵ��
	if (ret != -1)
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		p->Personarray[ret].Name = name;
		
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 ---> ��" << endl;
		cout << "2 ---> Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
             if (sex == 1 || sex == 2)
		   {
			//������ȷ���˳�ѭ��
		   	p->Personarray[ret].Sex = sex;
			break;
		   }
			 cout << "��������, ����������" << endl;
		}
		
		//���������
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		p->Personarray[ret].Age = age;

		//�绰
		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		p->Personarray[ret].Phone = phone;

		//��ַ
		cout << "�������ַ" << endl;
		string address;
		cin >> address;
		p->Personarray[ret].Addr = address;

		cout << "�޸ĳɹ�" << endl;

	}
	else
	{
		cout << "û�ҵ���Ҫ�ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");

}

/*�����ϵ��--> ������ϵ�˵�����Ϊ0 */ 
void CleanPerson(Addressbooks *p)
{
	p->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	/*����ͨѶ¼�Ľṹ�����*/
	Addressbooks abs;
	//��ʼ����ǰͨѶ¼�е�����
	abs.size = 0;

	int sel = 0;

	while (true)
	{
		/*�˵�����*/
		showMenu();

		cin >> sel;

		switch (sel)
		{
		case 1://�����ϵ��
			Addperson(&abs);
			break;
		case 2://��ʾ��ϵ��
			ShowPerson(&abs);
			break;
		case 3://ɾ����ϵ��
		            /*{cout << "��������Ҫɾ��������: " << endl;
		               string name;
		               cin >> name;
		            if (IsExist(&abs, name) == -1)
		            {
		            	cout << "�Ҳ�������" << endl;
		            }
		            else
		            {
		            	cout << "�ҵ��� " << endl;
		            }
		            }*/
			DelPerson(&abs);

			break;
		case 4://������ϵ��
			FindPerson(&abs);
			break;
		case 5://�޸���ϵ��
			ModefyPerson(&abs);
			break;
		case 6: //�����ϵ��
			CleanPerson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}

