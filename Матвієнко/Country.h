#pragma once
#include <vector>
#include <iostream>

using namespace std;


class Country
{
	string name;
	float area;
	string capital;
	vector<string> citys;

public:

	Country(string name) : name(name){}

	bool operator < (const Country& c) const
	{
		return name < c.name;
	}

	bool operator > (const Country& c) const
	{
		return name > c.name;
	}

	void info()
	{
		cout << "Name : " << name << endl;
		
	}
};
