#pragma once

#include <iostream>

using namespace std;

class Student
{
	const int id;
	string name;
	int age;

	static int count;

public:

	Student();

	Student(int id, string name, int age);

	void setAge(int age);

	int getAge();

	friend void print(Student s);

	void info()
	{

	}

	int getCount()
	{
		return count;
	}
};





inline int Student::getAge()
{
	return this->age;
}