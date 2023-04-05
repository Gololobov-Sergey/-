#pragma once

#include<iostream>

using namespace std;


class Point
{
	int x;
	int y;

public:
	Point() :Point(0, 0) {}
	Point(int x0, int y0) : x(x0), y(y0) {}


	Point& operator=(const Point& p)
	{
		if (this == &p)
			return *this;

		x = p.x;
		y = p.y;

		return *this;
	}

	void print()
	{
		cout << "Point ( x = " << x << " , y = " << y << ")" << endl;
	}

	Point operator+(Point p)
	{
		return Point(x + p.x, y + p.y);
	}


	Point operator*(Point p)
	{
		return Point(x * p.x, y * p.y);
	}

	Point operator+(int n)
	{
		return Point(x + n, y + n);
	}

	Point operator*(int n)
	{
		return Point(x * n, y * n);
	}

	Point operator++() //prefix
	{
		x++;
		y++;
		return *this;
	}

	Point operator++(int) //postfix
	{
		Point p(*this);
		x++;
		y++;
		return p;
	}


	friend Point operator+(int n, Point p);
};


Point operator+(int n, Point p)
{
	return p + n;
}