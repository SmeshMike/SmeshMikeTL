#include "String.h"
template <typename type> struct node
{
    node* next;
    node* prev;
    type value;
};

template<typename type> class bstree
{
private:
    node* root;
public:
    bstree();
    void Insert(string key, void* data);
    void Delete(string key);
    type Find(string key);
    bool EOT();
    ~bstree();
}; 