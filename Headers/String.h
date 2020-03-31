#ifndef __STRING_H__
#define __STRING_H__

namespace mstl 
{

	class string
	{
	private:
		unsigned long size;
		char* data;
	public:
		string();
		string(int);
		string(const char*);
		string(const string&);
		~string();
		string& operator= (const string&);
		bool operator== (const string&);
		string operator+ (const string&);
		string operator[] (unsigned long);
		bool IsNullOrEmpty();
		bool IsNullOrWhiteSpace();
		string SubString(string, unsigned long, unsigned long);
		const char* ToCharMas();
		string* Split(char);
		string Trim();
		string Trim(char);
		unsigned long Length();
	};

}

#endif // ! 