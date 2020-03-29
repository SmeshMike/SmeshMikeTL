template <typename type> struct node
{
    node* next;
    node* prev;
    type value;
};

template<typename type> class tree {
private:
    node<type>* root;
    node<type>* current;
public:
    tree();
    type Next();
    bool EOT();
    ~tree();
};