#include<iostream>
#include "circle.h"
#include "point.h"

using namespace std;


//��������
//class Point 
//{
//public:
//	//���á���ȡԲ������
//	void setX(int x)
//	{
//		 m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//
//private:
//	//Բ�������ȷ��
//	int m_X;
//	int m_Y;
//
//};


//����Բ��
//class Circle
//{
//public:
//	//���á���ȡ�뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//
//	//���á���ȡԲ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;         //�뾶
//	Point m_Center;  //Բ��
//};

//�жϵ� �� Բ֮��Ĺ�ϵ
void IfOnCircle(Circle &c, Point &p)
{
	//��������֮������ƽ��
	int Distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
				   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int RDistance = c.getR() * c.getR();

	//�ж������������Ĺ�ϵ
	if (Distance > RDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (Distance < RDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}

}


/*int main()
{
	//����Բ(ʵ����) �ԣ�1��0��ΪԲ�� �뾶Ϊ1��Բ
	Circle c;
	c.setR(1);
	Point center;
	center.setX(1);
	center.setY(0);
	c.setCenter(center);

	//������(ʵ����)
	Point  p;
	p.setX(1);
	p.setY(0);
	//�жϹ�ϵ
	IfOnCircle(c , p);

	system("pause");
	return 0;
}
*/

/*
//�������������
//��������
//��Ϊ   ���������������
//ȫ�ֺ��� ��Ա�����ж��������Ƿ����

class Cube
{
	//�����Խ��в���(��������)
public:
	//�ֱ��ȡ������ĳ�������
   //�ֱ��ȡ������ĳ�������
	void SetL(int l)
	{
		m_L = l;
	}
	int GetL()
	{
		return m_L;
	}

	void SetW(int w)
	{
		m_W = w;
	}
	int GetW()
	{
		return m_W;
	}

	void SetH(int h)
	{
		m_H = h;
	}
	int GetH()
	{
		return m_H;
	}

	//�������
	int CalS()
	{
		return 2 * m_L* m_W + 2 * m_L*m_H + 2 * m_W*m_H;
	}

	//�������
	int CalV()
	{
		return m_L * m_W * m_H;
	}

	//��Ա�����ж������������Ƿ���ͬ
	bool IfSameByClass(Cube &C)
	{
		if ((m_L == C.GetL()) && (m_W == C.GetW()) && (m_H == C.GetH()))
		{
			return true;
		}
			return false;
	}

  //��������Ϊ˽��
private:
	int m_L;
	int m_W;
	int m_H;

};

//����һ��ȫ�ֺ��� �Ƚ������������Ƿ���ͬ
bool IfSame(Cube &C, Cube &C1)
{
	if ( (C.GetL() == C1.GetL()) && (C.GetW() == C1.GetW()) && (C.GetH() == C1.GetH()) )
	{
		return true;
	}
	else
	{
		return false;
	}

}


int main()
{
	//�����������ߵĶ���
	Cube C;
	C.SetL(3);
	C.SetW(3);
	C.SetH(3);

	cout << "C�������" << C.CalS() << endl;
	cout << "C�������" << C.CalV() << endl;

	Cube C1;
	C1.SetL(1);
	C1.SetW(1);
	C1.SetH(1);

	cout << "C1���Ϊ: " << C1.CalS() << endl;
	cout << "C1���Ϊ: " << C1.CalV() << endl;

	
	bool ret = IfSame(C, C1);
	if (ret)
	{
		cout << "ȫ�ֺ����жϺ�: C��C1��ͬ" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϺ�: C��C1��ͬ" << endl;
	}

	

	ret = C.IfSameByClass(C1);
	if (ret)
	{
		cout << "��Ա�����жϺ�C��C1��ͬ" << endl;
	}
	else
	{
		cout << "��Ա�����жϺ�: C��C1��ͬ" << endl;
	}

	system("pause");
	return 0;
}
*/