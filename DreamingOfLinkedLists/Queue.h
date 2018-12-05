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

	Queue();
	bool isEmpty();
	void addToQueue(T);
	void removeFromQueue();
	T GetData();
	//Node *GetNode(T);
	void deleteNodeFromQueue();
private:
	Node *front;
	Node *rear;
	int count;
};

template <class T>
Queue<T>::Queue()/*: front (NULL), rear(NULL), count(0)*/
{
	front = NULL;
	rear = NULL;
	count = 0;
}

template <class T>
bool Queue<T>::isEmpty() {
	return (count == 0);
}

template <class T>
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

template <class T>
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


template <class T>
T Queue<T>::GetData()
{
	if (front != NULL) {
		cout << front->data << endl;
		return this->front->data;
	}
	return 0;
}
