#include "pch.h"
#include "../DreamingOfLinkedLists/Queue.h"


TEST(Queue, WhenAddingNewNode) {
	
	Queue aNewQueue;
	aNewQueue.addToQueue(5);
	
	Node *newNode = aNewQueue.GetData(5);

	EXPECT_EQ(5, aNewQueue.GetData());
}