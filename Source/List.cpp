#include "../Headers/List.h"

using namespace mstl;

list<int>::list()
{
	this->size = 0;
	this->head = new node<int>;
	head->next = this->tail;
	this->tail = head;
	this->tail->prev = head;
	this->tail->value = '\0';
}

void list<int>::Insert(int data)
{
	node<int>* nnd = new node<int>;
	nnd->value = data;
	nnd->prev = this->tail;
	this->size++;
	this->tail = nnd;

}