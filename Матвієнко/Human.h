#pragma once

#include <iostream>

using namespace std;


class Human
{
	string name;
	int age;

public:
	Human(string n, int a) : name(n), age(a) {}

	void print()
	{
		cout << "Name : " << name << endl;
		cout << "Age  : " << age << endl;
	}
};



class FootballPlayer : public Human
{
	int goals = 200;

public:
	FootballPlayer(string n, int a) : Human(n, a)
	{
	
	}

	void print()
	{
		Human::print();
		cout << "Goals : " << goals << endl;
	}
};
