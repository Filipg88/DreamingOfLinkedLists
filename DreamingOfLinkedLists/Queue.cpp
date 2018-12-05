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

void Queue::deleteNodeFromQueue()
{
	if (isEmpty())
		cout << "Empty" << endl;
	else {
		Node *temp = front;
		if (front == rear){
			front = NULL;
			rear = NULL;
		}
		else 
			front = front->next;
		delete temp;
		count--;
	}
}


//template <class T>
int Queue::GetData() 
{
	if (front!= NULL) {
		cout << front->data << endl;
		return this->front->data;
	}
	return 0;
}