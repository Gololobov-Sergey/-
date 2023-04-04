#pragma once

#include <iostream>

using namespace std;


class Human
{
	string name;
	int age;

public:
	Human(string n, int a) : name(n), age(a) {}

	virtual void print()
	{
		cout << "Name : " << name << endl;
		cout << "Age  : " << age << endl;
	}

	virtual void whatAreYouDoing()
	{

	}
};



class FootballPlayer : public Human
{
	int goals = 200;

public:
	FootballPlayer(string n, int a) : Human(n, a)
	{
	
	}

	virtual void print() override
	{
		Human::print();
		cout << "Goals : " << goals << endl;
	}


	virtual void whatAreYouDoing()
	{
		cout << "I`m football player" << endl;
	}
};


class Employee : public Human
{

	string nameFactory;

public:
	Employee(string n, int a, string nf) : Human(n, a), nameFactory(nf)
	{

	}

	virtual void print() override
	{
		Human::print();
		cout << "Name Factory : " << nameFactory << endl;
	}

	void whatAreYouDoing()
	{
		cout << "I`m employee" << endl;
	}
};