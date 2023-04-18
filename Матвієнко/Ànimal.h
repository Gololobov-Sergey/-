#pragma once
#include <iostream>
#include <string>

using namespace std;


class Animal
{
	string name;
	int age;

public:
	Animal() : Animal("No name", 0) {}

	Animal(string name, int age) : name(name), age(age) {}

	virtual ~Animal() { cout << "Des An" << endl; }

	virtual void print() = 0;

};


void Animal::print()
{
	cout << "Name : " << name << endl;
	cout << "Age  : " << age << endl;
}


class Cat final : public Animal
{
	int mouse;

public:
	Cat() : Cat("No name", 0, 0) {}
	Cat(string name, int age, int mouse) :
		Animal(name, age), mouse(mouse) {}

	virtual void print() override
	{
		cout << "-= Cat =-" << endl;
		Animal::print();
		cout << "Mouse : " << mouse << endl;
	}

};


class Dog : public Animal
{
	bool isGuard;

public:
	Dog() : Dog("No name", 0, false) {}

	Dog(string name, int age, bool isGuard) :
		Animal(name, age), isGuard(isGuard) {}

	~Dog() { cout << "Des Dog" << endl; }

	virtual void print() override
	{
		cout << "-= Dog =-" << endl;
		Animal::print();
		cout << "Is guard : " << isGuard << endl;
	}

};