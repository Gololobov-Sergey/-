#pragma once

#include <iostream>

using namespace std;

class Student
{
	const int id;
	string name;
	int age;

	int* mark;

	static int count;

public:

	Student();

	Student(int id, string name, int age);

	~Student()
	{
		delete[] mark;
	}

	void setAge(int age);

	int getAge();

	friend void print(Student s);

	void info()
	{

	}

	static int getCount()
	{
		return count;
	}
};





inline int Student::getAge()
{
	return this->age;
}