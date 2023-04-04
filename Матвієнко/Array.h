#pragma once

#include<iostream>

using namespace std;

template<class T>
class Array
{
	T* arr;
	int size;

public:
	Array(int s)
	{
		size = s;
		arr = new T[size];
	}

	~Array()
	{
		delete[] arr;
	}

	void set()
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 20;
		}
	}

	void print()
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

