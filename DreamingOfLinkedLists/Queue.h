#pragma once
#include <iostream>
#include <string>

using namespace std;

//template <class T>
class Queue
{
public:
	typedef struct Node
	{
		int data;
		Node *next;
	}Node;

	Queue();
	bool isEmpty();
	void addToQueue(int);
	void removeFromQueue();
	int GetData();
	Node *GetNode(int);
	void deleteNodeFromQueue();
private:
	Node *front;
	Node *rear;
	int count;
};

