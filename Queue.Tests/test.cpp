#include "pch.h"
#include "../DreamingOfLinkedLists/Queue.h"

TEST(QueueTest, AddingElementShouldStoreCorrectly) {
	
	Queue<int> aNewQueue;
	aNewQueue.addToQueue(5);
	EXPECT_EQ(5, aNewQueue.GetData());
}

TEST(QueueTest, WhenRemovingElementsShouldFIFO)
{
	Queue<int> aNewQueue;
	aNewQueue.addToQueue(5);
	aNewQueue.addToQueue(10);
	aNewQueue.deleteNodeFromQueue();
	EXPECT_EQ(10, aNewQueue.GetData());
}

TEST(QueueTest, ReturnCorrectSizeAfterUsingAddAndDeleteFunctions)
{
	Queue<int> aNewQueue;
	aNewQueue.addToQueue(5);
	aNewQueue.addToQueue(10);
	aNewQueue.deleteNodeFromQueue();
	
	EXPECT_EQ(1, aNewQueue.GetCount());
}