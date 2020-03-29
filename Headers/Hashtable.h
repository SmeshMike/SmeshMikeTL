#include "String.h"

struct record
{
    string key;
    void* data;
};

class hashtable {
private:
    record* memory;
    int size;
public:
    hashtable();
    hashtable(int _size);
    void Insert(string key, void* data);
    void Delete(string key);
    void* Find(string key);
    ~hashtable();
};