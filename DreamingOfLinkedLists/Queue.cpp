#include "Queue.h"

//template <class T>
Queue::Queue()/*: front (NULL), rear(NULL), count(0)*/
{
	front = NULL;
	rear = NULL;
	count = 0;
}

//template <class T>
bool Queue::isEmpty() {
	return (count == 0);
}

//template <class T>
void Queue::addToQueue(int data) {
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

//template <class T>
void Queue::removeFromQueue() {
}



//template <class T>
int Queue::GetData() 
{
	Queue *currentQue;
	if (currentQue->front!= NULL) {
		return this->front->data;
	}
	return 0;
}