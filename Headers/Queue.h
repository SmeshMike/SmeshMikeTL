template <typename type> struct node
{
    node* next;
    node* prev;
    type value;
};


template <typename type> class queue {
private:
    node* head;
    node* tail;
    int size;
public:
    queue();
    void Enqueue(Type t); //Запихать в очередь
    type Dequeue(); //Достать из очереди
    int GetSize();    
    type operator[](int index);
    ~queue();
};