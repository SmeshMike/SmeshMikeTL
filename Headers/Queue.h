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
    void Enqueue(Type t); //�������� � �������
    type Dequeue(); //������� �� �������
    int GetSize();    
    type operator[](int index);
    ~queue();
};