#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Continent
{
	vector<string> countries;

public:
	void AddCountry(string country)
	{
		countries.push_back(country);
	}

	void EqualsValue(string country)
	{
		for (string s : countries)
		{
			if (s == country)
			{
				cout << s << endl;
			}
		}
	}

	void FinfIndex(int index)
	{
		if (index < countries.size())
		{
			cout << countries[index] << endl;
		}
		else
		{
			cout << "Not found" << endl;
		}
	}

	void Replace(int index, int position, int count)
	{
		if (index < countries.size())
		{
			countries[index].replace(position, count, "qwerty");
		}
	}

	string Extract(int index, int position, int count)
	{
		if (index < countries.size())
		{
			return countries[index].substr(position, count);
		}
	}

	void printF()
	{
		for (string s : countries)
		{
			printf("%s\n", s.c_str());
		}
	}
};
