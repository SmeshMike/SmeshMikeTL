template <typename type> struct node
{
    node* next;
    type value;
};


template <typename type> class stack
{
private:
    node* head;
    int size;
public:
    stack();
    void Push(Type t);
    type Pop();
    type operator[](int index);
    type Top();
    ~stack();
};