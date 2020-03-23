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
};