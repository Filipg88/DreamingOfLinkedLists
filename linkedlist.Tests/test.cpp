#include "pch.h"
#include "../DreamingOfLinkedLists/linkedlist.h"

TEST(LinkedListTest, AddingIntNodeShouldAppendLastIfNothingElseSpecified) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.CreateNode(2);
	aNewLinkedList.CreateNode(6);
	aNewLinkedList.CreateNode(5);


	EXPECT_EQ(5, aNewLinkedList.GetData(2));
}

TEST(LinkedListTest, AddingStringNodeShouldAppendLastIfNothingElseSpecified) {
	Linkedlist<std::string> aNewLinkedList;
	aNewLinkedList.CreateNode("Singly");
	aNewLinkedList.CreateNode("Linked");
	aNewLinkedList.CreateNode("List");


	EXPECT_EQ("List", aNewLinkedList.GetData(2));
}

TEST(LinkedListTest, AddingANodeAtSpecificIndexAndBetweenTwoListItems) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(5, 1);

	EXPECT_EQ(5, aNewLinkedList.GetData(1));
}

TEST(LinkedListTest, CantSetIndexThatDosentExistShouldInsteadAppendLast) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 2);
	aNewLinkedList.AddDataAtIndex(10, 8);

	EXPECT_EQ(10, aNewLinkedList.GetData(2));
}

TEST(LinkedListTest, DeletingByIndexPosition) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(0);
	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(6, aNewLinkedList.GetData(0));
}

TEST(LinkedListTest, WhenDeletingByIndexInbetweenDataTheDataBehindTakesItsIndexPosition) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(8, aNewLinkedList.GetData(1));
}

TEST(LinkedListTest, ReturnCorrectSizeOfListAfterUsingAddAndDeleteFunctions) {
	Linkedlist<int> aNewLinkedList;
	aNewLinkedList.CreateNode(2);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);
	aNewLinkedList.DeleteByPosition(2);

	EXPECT_EQ(2, aNewLinkedList.GetSize());
}


