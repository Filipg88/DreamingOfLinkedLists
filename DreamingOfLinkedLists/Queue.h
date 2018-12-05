#pragma once
#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

template <class T>
class Queue
{
public:
	typedef struct Node
	{
		T data;
		Node *next;
	}Node;

	bool Queue<T>::isEmpty() {
		return (count == 0);
	}

	void Queue<T>::addToQueue(T data) {
		Node *newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		if (isEmpty()) {
			front = newNode;
		}
		else {
			rear->next = newNode;
		}
		rear = newNode;
		count++;
	}

	void Queue<T>::deleteNodeFromQueue()
	{
		if (isEmpty())
			cout << "Empty" << endl;
		else {
			Node *temp = front;
			if (front == rear) {
				front = NULL;
				rear = NULL;
			}
			else
				front = front->next;
			delete temp;
			count--;
		}
	}

	T Queue<T>::GetData()
	{
		if (front != NULL) {
			cout << front->data << endl;
			return this->front->data;
		}
		return 0;
	}

	Queue<T>::Queue()
	{
		front = NULL;
		rear = NULL;
		count = 0;
	}

private:
	Node *front;
	Node *rear;
	int count;
};




