#include "../Headers/String.h"

template <typename type> struct node
{
    node* next;
    node* prev;
    type value;
};

template <typename type> class bstree
{
private:
    node<type>* root;
    type value;
public:
    bstree();
    void Insert(mstl::string key, void* data);
    void Delete(mstl::string key);
    type Find(mstl::string key);
    bool EOT();
    ~bstree();
}; 