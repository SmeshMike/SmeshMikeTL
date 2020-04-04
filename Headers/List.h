namespace mstl
{
    template <typename type> struct node
    {
        node* next;
        node* prev;
        type value;
    };

    template <typename type> class list
    {
    private:
        node* head;
        node* tail;
        int size;
    public:
        list();
        list(unsigned long);
        void Insert(type data);
        void Remove(int index);
        type value;
        type operator[](int index);
        ~list();
    };
}