#pragma once

#include <iostream>

using namespace std;


class Fraction
{
	int nominator;
	int denominator;

public:
	Fraction() : Fraction(0, 1) {}
	Fraction(int n, int d) : nominator(n), denominator(d) { }

	void print()
	{
		cout << nominator << "/" << denominator << endl;
	}

	Fraction add(Fraction f)
	{
		return Fraction();
	}

	Fraction operator+(Fraction f)
	{
		Fraction res;
		res.nominator = nominator * f.denominator + denominator * f.nominator;
		res.denominator = denominator * f.denominator;
		return res;
	}

	Fraction operator+(int f)
	{
		return Fraction(nominator + f * denominator, denominator);
	}


};


Fraction operator+(int f, Fraction f2)
{
	return f2 + f;
}


//Fraction operator+(Fraction f1, Fraction f2)
//{
//	Fraction res;
//}