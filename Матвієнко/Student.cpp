#include "Student.h"


int Student::count = 0;

Student::Student() : id(0)
{
	name = "";
	age = 0;
}

Student::Student(int id, string name, int age) : id(id)
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