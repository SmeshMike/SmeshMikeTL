#include "../Headers/String.h"

using namespace mstl;

string::string()
{
	size = 0;
	data = new char[size+1];
	data[0] = '\0';
	
}

string::string(int size)
{
	this->size = size;
	data = new char[size + 1];
	data[size] = '\0';

}

string::string(const string& str)
{
	this->size = str.size;
	this->data = new char[size + 1];
	for (unsigned long i = 0; i < str.size; i++)
	{
		this->data[i] = str.data[i];
	}
	this->data[size] = '\0';
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
	string out =  string(len);
	out.size = len;
	out.data = new char[out.size + 1];
	for (unsigned long i = 0; i < this->size; i++)
	{
		out.data[i] = this->data[i];
	}
	for (unsigned long i = 0; i < str.size; i++)
	{
		out.data[i+ this->size] = str.data[i];
	}
	out.data[out.size] = '\0';

	return out;
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

bool string::IsNullOrEmpty()
{
	if (this->size == 0 && this->data[0] == '\0')
		return true;
	return false;
}

bool string::IsNullOrWhiteSpace()
{
	bool marker = true;
	for (unsigned long i = 0; i < this->size; i++)
	{
		if (this->data[i] != ' ')
			marker = false;
	}
	if ((this->size == 0 && this->data[0] == '\0')||marker)
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
	out[len] = '\0';
	
	return out;
}

string* string::Split(char ch)
{
	unsigned long len = 0;
	for (unsigned long i = 0; i < this->size; i++)
		if(this->data[i]==ch)
			len++;
	if (data[this->size] != ch)
		len++;

	
	string* mas = new string[len];

	unsigned long coun = 0;
	unsigned long i = 0;
	unsigned long k = 0;
	while (coun != len)
	{
		if (this->data[i] != ch && i<this->size)
		{
			mas[coun].data[k] = this->data[i];
			i++;  k++;
			mas[coun].size = k;
			mas[coun].data[k] = '\0';

		}
		else 
		{
			coun++; i++; k = 0;
		}

	}
	return mas;
}

string string::Trim(char ch)
{
	unsigned long k = 0;
	for (unsigned long i = 0; i < this->size; i++)
		if (this->data[i] == ch)
			k++;
	
	string str= string(this->size - k);

	k = 0;
	
	for (unsigned long i = 0; i< this->size; i++)
	{
		if (this->data[i] != ch)
		{
			(str).data[k] = this->data[i];
			k++;
		}
	}

	(str).size = k;

	(str).data[k] = '\0';
	return (str);
}

unsigned long string::Length()
{
	return this->size;
}

string string::Trim()
{
	unsigned long k = 0;
	for (unsigned long i = 0; i < this->size; i++)
		if (this->data[i] == ' ')
			k++;

	string str = string(k);

	k = 0;

	for (unsigned long i = 0; i < this->size; i++)
	{
		if (this->data[i] != ' ')
		{
			(str).data[k] = this->data[i];
			k++;
		}
	}

	(str).size = k;

	(str).data[k] = '\0';
	return (str);
}