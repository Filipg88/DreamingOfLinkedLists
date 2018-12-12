#pragma once
#include <iostream>
// hello
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

	void set_tail(T data)
	{
		Node *new_node = new Node();
		tail = new_node;
		tail->next = NULL;
		tail->data = data;
		head->next = tail;
		tail->prev = head;
	}

	void set_head(T data)
	{
		Node *new_node = new Node();
		head = new_node;
		head->next = NULL;
		head->prev = NULL;
		head->data = data;
	}

	void append_list(T data)
	{
		Node *prev_tail = tail;
		Node *new_tail = new Node();
		new_tail->data = data;

		new_tail->prev = prev_tail;
		prev_tail->next = new_tail;
		tail = new_tail;
	}

	void addToList(T data)
	{
		if (head == NULL)
		{
			set_head(data);
			count++;
			return;
		}
		
		else
		{
			if (tail == NULL)
			{
				set_tail(data);
				count++;
				return;
			}
			else
			{
				append_list(data);
				count++;
				return;
			}
		}
		
	}

	T GetData(int index) {
		Node *current = head;
		//current = head;
		for (int i = 0; i < index; i++)
		{
			current = current->next;
		}
		return current->data;
	}

	
	//~DoubleLinkedList();
private:
	int count;
	Node* head;
	Node* tail;
};

