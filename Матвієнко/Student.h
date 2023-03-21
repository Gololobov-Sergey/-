#pragma once

#include <iostream>

using namespace std;

class Student
{
	string name;
	int age;

public:

	Student();

	Student(string name, int age);

	void setAge(int age);

	int getAge();

	friend void print(Student s);
};


inline int Student::getAge()
{
	return this->age;
}