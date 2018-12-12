#include "pch.h"
#include "../DreamingOfLinkedLists/DoubleLinkedList.h"

TEST(DoubleLinkedListTest, AddingIntNodeShouldAppendLastIfNothingElseSpecified) {

	DoubleLinkedList <int> list;
	list.SetHeadAndAppendLast(2);
	list.SetHeadAndAppendLast(5);
	list.SetHeadAndAppendLast(8);

	EXPECT_EQ(8, list.GetData(2));
}

TEST(DoubleLinkedListTest, AddingStringNodeShouldAppendLastIfNothingElseSpecified) {
	DoubleLinkedList<std::string> aNewLinkedList;
	aNewLinkedList.SetHeadAndAppendLast("Double");
	aNewLinkedList.SetHeadAndAppendLast("Linked");
	aNewLinkedList.SetHeadAndAppendLast("List");


	EXPECT_EQ("List", aNewLinkedList.GetData(2));
}

TEST(DoubleLinkedListTest, CantSetIndexThatDosentExistShouldInsteadAppendLast) {

	DoubleLinkedList <int> list;

	list.AddDataAtIndex(6, 0);
	list.AddDataAtIndex(7, 2);

	EXPECT_EQ(7, list.GetData(1));
}

TEST(DoubleLinkedListTest, AddingANodeAtSpecificIndexAndBetweenTwoListItems) {

	DoubleLinkedList <int> list;

	list.SetHeadAndAppendLast(6);
	list.SetHeadAndAppendLast(7);
	list.SetHeadAndAppendLast(10);

	list.AddDataAtIndex(15, 1);


	EXPECT_EQ(15, list.GetData(1));
}

TEST(DoubleLinkedListTest, DeletingByIndexPosition) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(0);
	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(6, aNewLinkedList.GetData(0));
}

TEST(DoubleLinkedListTest, WhenDeletingByIndexInbetweenDataTheDataBehindTakesItsIndexPosition) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(8, aNewLinkedList.GetData(1));
}

TEST(DoubleLinkedListTest, ReturnCorrectSizeOfListAfterUsingAddAndDeleteFunctions) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);
	aNewLinkedList.DeleteByPosition(2);

	EXPECT_EQ(2, aNewLinkedList.GetSize());
}
