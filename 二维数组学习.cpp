#include<iostream>
#include<string>

using namespace std;


int main()
{
	string names[3] = {"��**","��**","��**"};

	int score[3][3] = { {90,90,100}, {90,60,100}, {60,70,80}};

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
				//cout<< score[i][j] << " " ;
		}
		cout << names[i] << "�ķ���Ϊ: " << sum << endl;//ͨ���������õ���Ӧ�������ܺ�
	}

	/*int arr[2][3] = { {1,2,3}, {1,2,3} };

	cout << "����arr������ռ�ڴ�ռ�Ĵ�С" << sizeof(arr) << endl;

	cout << "��һ����ռ�ڴ�ռ�Ĵ�С��" << sizeof(arr[0]) << endl;
	cout << "ÿ��Ԫ����ռ���ڴ�ռ��С" << sizeof(arr[0][0]) << endl;

	cout << "��ά���������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "��ά������׵�ַ" << (int)&arr << endl;
	cout << "��ά�������Ԫ�ص�ַ" << (int)&arr[0][0] << endl;
	cout << "��ά�����һ�еĵ�ַ" << (int)&arr[0] << endl;
	cout << "��ά����ĵڶ���Ԫ���׵�ַ" << (int)&arr[1] << endl;*/
	
	//cout << sizeof(arr) << endl;
	/*int arr1[3][3] = { { 1, 2, 3 }, { 1, 2, 3 }, {1, 2, 3} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}*/

	system("pause");
	return 0;
}