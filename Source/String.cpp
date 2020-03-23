#include "String.h"

string::string()
{
	size = 0;
	data = new char[size+1];
	data[0] = '\0';
	
}

string& string::operator=(const string& str)
{
	if (&str == this)
		throw "Erorr";
	delete[] data;
	size = str.size;
	data = new char[size + 1];
	for (unsigned long i = 0; i < size; i++)
	{
		data[i] = str.data[i];
	}
	data[size] = '\0';
	return *this;
}

string::~string()
{
	delete[] data;
}

