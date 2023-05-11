#include<iostream>
using namespace std;
#include "circle.h"

//点类
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
////圆类
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
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
//	int m_R;//半径
//	Point m_Center;//圆心
//};

//判断点和圆的关系
void isInCircle(Circle& c, Point p)
{
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rdistance = c.getR() * c.getR();
	if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rdistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}


int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(10);
	isInCircle(c, p);
}