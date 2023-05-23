#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class MyException
{
	string date;
	string time;
	string file;
	string error;
	int line;

	string path = "log.txt";

protected:
	string message;

public:
	MyException(string d, string t, string f, int l, string err) :
		date(d), time(t), file(f), line(l), error(err)
	{
		message = date + " | " + time + " | " + file + " | " + to_string(line) + " | " + error;
	}

	void saveLog()
	{
		ofstream f(path, ios::app);
		f << message << endl;
		f.close();
	}

	string getError()
	{
		return error;
	}

	string getConsole()
	{
		return message;
	}
};
