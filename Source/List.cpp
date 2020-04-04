#include "../Headers/List.h"

using namespace mstl;

list<int>::list()
{
	this->size = 0;
	this->head = new node<int>;
	this->tail = head;
}

void list<int>::Insert(int data)
{
	node<int>* nnd = new node<int>;
	nnd->value = data;
	this->size++;

	tail = tail.
	
	this->size++;
}