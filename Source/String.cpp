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
	{
		marker = false;
		return false;
	}
	unsigned long i = 0;
	while (marker&&i<str.size)
	{
		if (this->data[i] != str.data[i]);
		marker = false;
		i++;
	}
	return marker;
}

string string::operator+ (const string& str)
{
	int len = this->size + str.size;
	string* out = new string[len];
	(*out).size = len;
	(*out).data = new char[(*out).size + 1];
	for (unsigned long i = 0; i < this->size; i++)
	{
		(*out).data[i] = this->data[i];
	}
	for (unsigned long i = 0; i < str.size; i++)
	{
		(*out).data[i+ this->size] = str.data[i];
	}
	(*out).data[(*out).size] = '\0';

	return *out;
}

string::string(const char* chr)
{
	unsigned long len = 0;
	while (chr[++len] != '\0');
	this->size = len;
	this->data = new char[size + 1];
	for (unsigned long i = 0; i < size; i++)
		this->data[i] = chr[i];

	data[size] = '\0';
}

string::~string()
{
	delete[] data;
}

bool string::IsNullOrEmpty(string& str)
{
	if (this->size == 0 && this->data[0] == '\0')
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
	return *this;
}

const char* string::ToCharMas()
{
	unsigned long len = this->size;
	char* out = new char[len+1];
	for (unsigned long i = 0; i < len; i++)
	{
		out[i] = this->data[i];
	}
	
	return out;
}

string* string::Split(char ch)
{
	unsigned long len = 0;
	for (unsigned long i = 0; i < this->size; i++)
		if(this->data[i]==ch)
			len++;
	string* mas = new string[len];

	unsigned long coun = 0;
	unsigned long i = 0;
	unsigned long k = 0;
	while (coun != len)
	{
		if (this->data[i] != ch)
		{
			mas[coun].data[k] = this->data[i];
			k++; i++;
		}
		else 
		{
			mas[coun].size = i;
			mas[coun].data[k] = '\0'; 
			coun++; i++; k = 0; 
		}

	}
	return mas;
}

string string::Trim(char ch)
{
	unsigned long k = 0;
	string str;
	for (unsigned long i = 0; i< this->size; i++)
	{
		if (this->data[i] != ch)
		{
			str.data[i-k] = this->data[i];
		}
		else
			k++;
		str.size = i;
	}

	str.data[size + 1] = '\0';
	return str;
}

unsigned long string::Length()
{
	return this->size;
}
