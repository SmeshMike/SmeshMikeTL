class string
{
private:
	unsigned long size;
	char* data;
public:
	string();
	string(const char*);
	string& operator= (const string&);
	~string();
	bool IsNullOrEmpty(string&);
	bool operator== (const string&);
	string SubString(string, unsigned long, unsigned long);
	string operator+ (const string&);
	string operator[] (unsigned long);
	const char* ToCharMas();
	string* Split(char);
	string Trim();
	string Trim(char);
	unsigned long Length();
};