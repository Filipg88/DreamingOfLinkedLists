#pragma once
#include <iostream>
#include <string>


//template <class T>
class Queue
{
public:
	struct Node
	{
		int data;
		Node *next;
	};
	Queue();
	bool isEmpty();
	void addToQueue(int data);
	void removeFromQueue();
	int GetData();
private:
	Node *front;
	Node *rear;
	int count;
};

