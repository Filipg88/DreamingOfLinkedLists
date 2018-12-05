#include "pch.h"
#include "../DreamingOfLinkedLists/Queue.h"

TEST(QueueTest, WhenAddingDataToNodeItShouldStoreCorrectly) {
	
	Queue<int> aNewQueue;
	aNewQueue.addToQueue(5);
	EXPECT_EQ(aNewQueue.GetData(), 5);
}

TEST(QueueTest, WhenDeletingDataFromNodeItShouldRemoveCorrectly)
{
	Queue<int> aNewQueue;
	aNewQueue.addToQueue(5);
	aNewQueue.addToQueue(10);
	aNewQueue.deleteNodeFromQueue();
	EXPECT_EQ(aNewQueue.GetData(), 10);
}

//ett size-test