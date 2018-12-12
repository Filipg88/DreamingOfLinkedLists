//#pragma once
//#include <iostream>
//template <class T>
//class DoubleLinkedList
//{
//
//public:
//	typedef struct Node
//	{
//		T data;
//		Node* next;
//		Node* prev;
//	}Node;
//
//	DoubleLinkedList()
//	{
//		this->count = 0;
//		this->head = NULL;
//		this->tail = NULL;
//	}
//
//	int GetCount() {
//		return count;
//	}
//
//	void set_tail(T data)
//	{
//		Node *new_node = new Node();
//		tail = new_node;
//		tail->next = NULL;
//		tail->data = data;
//		head->next = tail;
//		tail->prev = head;
//	}
//
//	void set_head(T data)
//	{
//		Node *new_node = new Node();
//		head = new_node;
//		head->next = NULL;
//		head->prev = NULL;
//		head->data = data;
//	}
//
//	void append_list(T data)
//	{
//		Node *prev_tail = tail;
//		Node *new_tail = new Node();
//		new_tail->data = data;
//
//		new_tail->prev = prev_tail;
//		prev_tail->next = new_tail;
//		tail = new_tail;
//	}
//
//	void addToList(T data)
//	{
//		if (head == NULL)
//		{
//			set_head(data);
//			count++;
//			return;
//		}
//		
//		else
//		{
//			if (tail == NULL)
//			{
//				set_tail(data);
//				count++;
//				return;
//			}
//			else
//			{
//				append_list(data);
//				count++;
//				return;
//			}
//		}
//		
//	}
//
//	T GetData(int index) {
//		Node *current = head;
//		//current = head;
//		for (int i = 0; i < index; i++)
//		{
//			current = current->next;
//		}
//		return current->data;
//	}
//
//	
//	//~DoubleLinkedList();
//private:
//	int count;
//	Node* head;
//	Node* tail;
//};
//

#pragma once
#include <vector>
#include <iostream>
#include <string>

template <class T>
class DoubleLinkedList {
public:
	typedef struct Node {
		T data;
		Node *next;
		Node *prev;
	}Node;

	DoubleLinkedList() {
		head = NULL;
		
		count = 0;
	}

	int GetSize()
	{
		return count;
	}

	void CreateNode(T data) {
		Node *temp = new Node;
		Node *start;
		temp->data = data;
		temp->next = NULL;
		
		if (head == NULL) {
			temp->prev = NULL;
			head = temp;
		}
		else {
			start = head;
			while (start->next != NULL)
			{
				start = start->next;
			}
			start->next = temp;
			temp->prev = start;
		}
		count++;
	}

	void AddDataAtIndex(T data, int pos)
	{

		if (count == 0 || pos > count) {
			CreateNode(data);
			return;
		}

		Node *newNode = new Node;
		Node *current = head;
		newNode->data = data;
		/*for (int i = 0; i < pos; i++) {
			current = current->next;
		}*/
		//newNode->next = current;
		//current = head;
		for (int i = 0; i < pos - 1; i++) {
			current = current->next;
			if (current == NULL)
				return;
		}
		if (current->next == NULL)
		{
			current->next = newNode;
			newNode->next = NULL;
			newNode->prev = current;
		}
		else
		{
			newNode->next = current->next;
			newNode->next->prev = newNode;
			current->next = newNode;
			newNode->prev = current;
		}


		count++;
	}

	void DeleteHead() {
		Node *temp;
		temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;
	}

	void DeleteByPosition(int pos) {
		count--;
		Node *current;
		Node *temp;

		if (pos == 0) {
			DeleteHead();
			return;
		}

		current = head;
		for (int i = 0; i <= pos; i++)
		{
			
			if (i == pos-1)
			{
				temp = current->next;
				current->next = temp->next;
				if(temp->next != NULL)
					temp->next->prev = current;
				delete temp;

				return;
			}
			
			current = current->next;
		}
		/*temp = current->next;
		delete temp;
		current->next = NULL;*/
		/*temp->next = current->next;*/
	}

	T GetData(int index) {
		Node *current;
		current = head;
		for (int i = 0; i < index; i++)
		{
			current = current->next;
		}
		return current->data;
	}

private:
	Node *head;
	Node *tail;
	int count;
};