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

	Country() {}

	Country(string name) : name(name){}

	Country(const string& name, float area, const string& capital)
		: name(name), area(area), capital(capital)
	{
	}

	bool operator < (const Country& c) const
	{
		return name < c.name;
	}

	bool operator > (const Country& c) const
	{
		return name > c.name;
	}

	void addCitys(string city)
	{
		citys.push_back(city);
	}

	void info()
	{
		cout << "Name : " << name << endl;
		
	}

	friend ostream& operator<<(ostream& out, const Country& country);

	friend istream& operator>>(istream& in, Country& country);

};


ostream& operator<<(ostream& out, const Country& country)
{
	out << "Country : " << country.name << endl;
	out << "Area    : " << country.area << endl;
	out << "Capital : " << country.capital << endl;
	if (country.citys.size() > 0)
	{
		out << "City : ";
		for (string c : country.citys)
		{
			out << c << ", ";
		}
		out << endl;
	}
	return out;
}

istream& operator>>(istream& in, Country& country)
{
	cout << "Country : "; getline(in, country.name);
	cout << "Area    : "; in >> country.area;
	in.ignore();
	cout << "Capital : "; getline(in, country.capital);
	return in;
}