//#pragma once
//#include <iostream>
//#include <vector>
//
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
//		this->size = 0;
//		this->head = NULL;
//		this->tail = NULL;
//	}
//
//	int GetSize() {
//		return size;
//	}
//
//	void InsertRandomPosition(T data) 
//	{
//		Node *newNode = new Node;
//		newNode->data = data;
//		newNode->next = NULL;
//		newNode->prev = NULL;
//		if (GetSize() == 0)
//		{
//			head = newNode;
//			tail = newNode;
//		}
//	}
//
//	T GetElementByIndex() {
//
//	}
//
//	void RemoveElementAtRandomPosition() {
//
//	}
//	
//	~DoubleLinkedList() {
//		clear();
//	}
//private:
//	int size;
//	Node* head;
//	Node* tail;
//};
//
