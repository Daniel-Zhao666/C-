#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class Lib
{
public:
	void Showlib()
	{
		cout << "չʾͼ���" << endl;
	}

	void Showbooknum()
	{
		//�ж�this��ָ��Ŀռ��Ƿ�Ϊ��
		if (this == NULL)
		{
			return;
		}
		cout << "ͼ�������Ϊ: " << this -> Book_num << endl;//����֮ǰĬ�� ����this 
	}


	int Book_num;
};

void testfun()
{
	Lib * lib = NULL;

	lib->Showlib();
	lib->Showbooknum();
}

/*
int main()
{

	testfun();

	system("pause");
	return 0;
}
*/