#include "pch.h"
#include "../DreamingOfLinkedLists/Queue.h"

TEST(QueueTest, WhenAddingDataToNodeItShouldStoreCorrectly) {
	
	Queue aNewQueue;
	aNewQueue.addToQueue(5);
	EXPECT_EQ(aNewQueue.GetData(), 5);
}

TEST(QueueTest, WhenDeletingDataFromNodeItShouldRemoveCorrectly)
{
	Queue aNewQueue;
	aNewQueue.addToQueue(5);
	aNewQueue.addToQueue(10);

	aNewQueue.deleteNodeFromQueue();

	EXPECT_EQ(aNewQueue.GetData(), 10);
}