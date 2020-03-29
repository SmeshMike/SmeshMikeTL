class string
{
private:
	unsigned long size;
	char* data;
public:
	string();
	string(char*);
	string& operator= (const string&);
	~string();
	bool IsNullOrEmpty(string&);
	bool operator== (const string&);
	string SubString(string, unsigned long, unsigned long);
	string& operator+ (const string&);
};