#pragma once
#include<iostream>

using namespace std;

//ͷ�ļ��������� Դ�ļ���ʵ����Ĺ���
class Point
{
public:
	//���á���ȡԲ������
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	
private:
	//Բ�������ȷ��
	int m_X;
	int m_Y;

};