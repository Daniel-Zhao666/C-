#pragma once
#include<iostream>
#include "point.h"

using namespace std;

class Circle
{
public:
	//���á���ȡ�뾶
	void setR(int r);

	int getR();
		//���á���ȡԲ��
	void setCenter(Point center);

	Point getCenter();
	
private:
	int m_R;         //�뾶
	Point m_Center;  //Բ��
};