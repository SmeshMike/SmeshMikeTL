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

bool string::operator==(const string& str)
{
	bool marker = true;
	if (this->size != str.size)
		marker = false;
	unsigned long i = 0;
	while (marker&&i<str.size)
	{
		if (this->data[i] != str.data[i]);
	}
	return marker;
}

string& string::operator+ (const string& str)
{
	string out;
	out.size = this->size + str.size;
	data = new char[size + 1];
	for (unsigned long i = 0; i < this->size; i++)

	{

		out.data[i] = this->data[i];

	}
	for (unsigned long i = this->size; i < out.size; i++)

	{

		out.data[i] = str.data[i];

	}
	out.data[size + 1] = '\0';

	return out;
}

string::string(char* chr)
{
	this->size = sizeof(chr);
	data = new char[size + 1];
	for (unsigned long i = 0; i < size; i++)

	{

		this->data[i] = chr[i];

	}
	data[size] = '\0';
}

string::~string()
{
	delete[] data;
}

bool string::IsNullOrEmpty(string& str)
{
	if (this->size == 0 && this->data == '\0')
		return true;
	return false;
}

string string::SubString(string str, unsigned long start, unsigned long length)
{
	for (unsigned long i = 0; i < str.size; i++)

	{

		if(i<length)

		this->data[i] = str.data[start + i];



		delete[i] data;

	}
	this->size = length;
	this->data[size + 1] = '\0';
}