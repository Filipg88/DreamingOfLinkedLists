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

	void SetHeadAndAppendLast(T data) {
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
			SetHeadAndAppendLast(data);
			return;
		}

		Node *newNode = new Node;
		Node *current = head;
		newNode->data = data;
		
		for (int i = 0; i < pos - 1; i++) {
			current = current->next;
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

		if (pos > count) {
			std::cout << "Element not found" << std::endl;
			return;
		}

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