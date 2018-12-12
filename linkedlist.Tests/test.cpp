#include "pch.h"
#include "../DreamingOfLinkedLists/linkedlist.h"

TEST(LinkedListTest, WhenAddingIntNodeShouldAppendLast) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.CreateNode(2);
	aNewLinkedList.CreateNode(6);
	aNewLinkedList.CreateNode(5);


	EXPECT_EQ(5, aNewLinkedList.GetData(2));
}

TEST(LinkedListTest, WhenAddingStringNodeShouldAppendLast) {
	Linkedlist<std::string> aNewLinkedList;
	aNewLinkedList.CreateNode("hej");
	aNewLinkedList.CreateNode("po");
	aNewLinkedList.CreateNode("dig");


	EXPECT_EQ("dig", aNewLinkedList.GetData(2));
}

TEST(LinkedListTest, InsertNodeAtIndexAfterCreatingList) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.CreateNode(2);
	aNewLinkedList.CreateNode(6);
	aNewLinkedList.CreateNode(5);

	aNewLinkedList.AddDataAtIndex(15, 1);

	EXPECT_EQ(15, aNewLinkedList.GetData(1));
}

TEST(LinkedListTest, WhenAddingANodeAtSpecificIndex) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 2);
	aNewLinkedList.AddDataAtIndex(5, 1);

	EXPECT_EQ(5, aNewLinkedList.GetData(1));
}

TEST(LinkedListTest, WhenAddingANodeGreaterAtIndexGreaterThanSizeShouldAddNodeLast) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 2);
	aNewLinkedList.AddDataAtIndex(10, 8);

	EXPECT_EQ(10, aNewLinkedList.GetData(2));
}

TEST(LinkedListTest, Del) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(0);
	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(6, aNewLinkedList.GetData(0));
}

TEST(LinkedListTest, DelMiddle) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	
	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(8, aNewLinkedList.GetData(1));
}

TEST(LinkedListTest, GetSizeOfLinkedList) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	EXPECT_EQ(3, aNewLinkedList.GetSize());
}

TEST(LinkedListTest, GetSizeOfLinkedListWhenNodeIsDeleted) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(2);

	EXPECT_EQ(2, aNewLinkedList.GetSize());
}

