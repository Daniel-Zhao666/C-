#include<iostream>

#include<ctime>

#include<iomanip>

using namespace std;


int main()
{
	//ð������
	int arr[6] = {6, 3, 0, 8, 9, 1}; 

	cout << "����ǰ��" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	

	///int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	//�ܹ���Ҫ�����������˳��ȽϵĴ����� = Ԫ�ظ��� - 1
	for (int i = 0; i < right; i++)
	{
		//�ڲ�ѭ���ıȽϣ� �ȽϵĴ��� = Ԫ�ظ��� - ��ǰ������ - 1(sizeof(arr)/sizeof(arr[0])  - 1-i)
		for (int j = 0; j <right - i; j++)
		{
			//��ǰһ�����ֱȺ�һ�������ʱ��������򣨽���˳��
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
			    arr[j] = arr[j + 1];
			    arr[j + 1] = temp;
			}
		}
	}

	 cout << "�����" << endl;
	for (int i = 0; i < right + 1; i++)
	{
		cout << arr[i] << endl;
	}
	  


	/*
	//��������
	int arr[6] = {0, 1, 2, 3, 9, 10};
	cout << "Ԫ������ǰ" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}

	int left = 0;//��ȡ�������Ԫ�ص��±�
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�õ���������һ��Ԫ���±�


	while (left < right)
	{
		int temp = arr[left];
		    arr[left] = arr[right];
		    arr[right] = temp;
		    left++;
		    right--;
	}

	  cout << "Ԫ�������" << endl;
	  for (int i = 0; i < 6; i++)
	  {
		  cout << arr[i] << endl;
	  }
	  */

	/*int arr[6] = {100,101,110,108,115,130};
	int max = 10;//�Զ���ο�ֵ�����������б�����ʵʱ������ֵ���������

	for (int i = 0; i < 6; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
     cout << "���ֵΪ��" << max << endl;*/

	/*
	//continue ��� 
	for (int i = 0; i < 10; i++)
	{
		if (0 == i % 2)
		{
			continue; //��������forѭ����continue֮�����䲻ִ�У�������break��ֱ����������ѭ����
		}
		cout << i << endl;
	}
	*/

	//��ѭ��һ�Σ���Ӧ��ѭ��һ��

	//��ӡ�˷��ھ���
	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
		//setw() ---> ͷ�ļ� <iomanip> ,setw()��ʾ���������ݺ������Ԥ���ռ䣬�������С�ڸÿռ���
		//�����0���룬ֻ��������������Ч
			cout << j << " * " << i << " = " << setw(2) << j * i << "  ";
		}
		cout << endl;
	}*/

	/*
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "hello" << "   ";
		}
		cout << endl;

	}*/

	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7 )
		{
			cout << "������" << endl;//�������ֵĴ�ӡ
		}
		else//���������ֵ�ֱ�Ӵ�ӡ
		{
			cout << i << endl;
		}
	}
	*/

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/

	//�ҵ���λ����ˮ�ɻ��� һ������: 153 = 1^3 + 5^3 + 3^3
	/*int a = 0;
	int b = 0;
    int c = 0;
	int num = 100;//��λ����ʼ����100��ʼ
	do
	{
		

		a = num % 10;//��ȡ����λ���ĸ�λ��
		b = num / 10 % 10;
		c = num / 100;
		
		if (num == a*a*a + b*b*b + c*c*c)
		{
			cout << num << endl;
		}
		num++;

	} while (num < 1000);
*/

	/*
	int num = 0;

	//��ִ��do�е���䣬������ж�
	do
	{
		cout << num << endl;
		num++; 
	} while (num < 8);
	*/

	//while -> ���ж���������ִ��
	//while (num < 8)
	//{
	//	cout << num << endl;
	//	num++;
	//}
	
	
	/*
	//������
	//���������
    srand((unsigned int)time(NULL));
	int val = rand() % 10 + 1;//����һ��1~10���������

	cout << "��������Ҫ�µ����֣�" << endl;
	int num = 0;

	while (1)
	{
		cin >> num;

		if (num > val)
		{
			cout << "�´��ˣ�������" << num << endl;
		}
		else if (num < val)
		{
			cout << "��С�ˣ�����" << num << endl;
		}
		else
		{
			cout << "�¶���" << num << endl;
			break;
		}
	}*/
	

	/*int a = 0;
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}*/

	/*cout << "���ѡ�ֽ�������" << endl;

	int score = 0;
	cin >> score;

	switch (score)
	{
	case 9:
		cout << "�ǳ�����" << endl;
		break;
	case 8:
		cout << "����" << endl;
		break;
	case 7:
		cout << "�ϸ�" << endl;
		break;
	case 6:
		cout << "����Ŭ��" << endl;
		break;
	default:
		cout << "���Ĵ���" << endl;
		break;
	}//switch���ж�ʱ��int��char�⣬���ܹ��ж��������
	*/

	system("pause");
	return 0;
}