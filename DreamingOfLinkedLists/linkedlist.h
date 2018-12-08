#pragma once
#include <vector>
#include <iostream>
#include <string>

template <class T>
class Linkedlist {
public:
	typedef struct Node{
		T data;
		Node *next;
	}Node;

	Linkedlist() {
		head = NULL;
		tail = NULL;
		count = 0;
	}

	void CreateNode(T data) {
		Node *temp = new Node;
		temp->data = data;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}

	void AddDataAtIndex(T data, int pos)
	{
		Node *newNode = new Node;
		Node *current = head;

		if (count == 0 || pos > count) {
			CreateNode(data);
			return;
		}

		newNode->data = data;
		for (int i = 0; i < pos; i++) {
			current = current->next;
		}
		newNode->next = current;
		current = head;
		for (int i = 0; i < pos - 1; i++) {
			current = current->next;
		}
		current->next = newNode;
		count++;
	}

	void DeleteHead() {
		Node *temp = new Node;
		temp = head;
		head = head->next;
		delete temp;
	}

	void DeleteByPosition(int pos) {
		Node *current = new Node;
		Node *prev = new Node;

		if (pos == 0) {
			DeleteHead();
			return;
		}

		current = head;
		for (int i = 0; i < pos; i++)
		{
			prev = current;
			current = current->next;
		}
		prev->next = current->next;
		count--;
	}

	T GetData(int index) {
		Node *current = new Node;
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