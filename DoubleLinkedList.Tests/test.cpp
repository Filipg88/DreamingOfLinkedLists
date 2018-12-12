#include "pch.h"
#include "../DreamingOfLinkedLists/DoubleLinkedList.h"

TEST(doublyLinkedList, appendNode) {

	DoubleLinkedList <int> list;
	list.addToList(4);
	list.addToList(5);
	list.addToList(8);

 EXPECT_EQ(8, list.GetData(2));

}