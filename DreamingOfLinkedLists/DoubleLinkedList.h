#pragma once
#include <iostream>

template <class T>
class DoubleLinkedList
{

public:
	typedef struct Node
	{
		T data;
		Node* next;
		Node* prev;
	}Node;

	DoubleLinkedList()
	{
		this->count = 0;
		this->head = NULL;
		this->tail = NULL;
	}

	int GetCount() {
		return count;
	}

	void AddToList(T data) 
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;
		if (GetCount() == 0)
		{
			head = newNode;
			tail = newNode;
		}
	}

	
	~DoubleLinkedList();
private:
	int count;
	Node* head;
	Node* tail;
};

