#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
}

Student::Student(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Student::setAge(int age)
{
	if (age < 100)
		this->age = age;
}

void print(Student s)
{
	cout << s.name << " " << s.age << endl;
}