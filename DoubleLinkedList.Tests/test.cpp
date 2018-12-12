#include "pch.h"
#include "../DreamingOfLinkedLists/DoubleLinkedList.h"

TEST(doublyLinkedList, appendNode) {

	DoubleLinkedList <int> list;
	list.CreateNode(2);
	list.CreateNode(5);
	list.CreateNode(8);

	EXPECT_EQ(8, list.GetData(2));
}

TEST(doublyLinkedList, CantSetIndexThatDosentExist) {

	DoubleLinkedList <int> list;

	list.AddDataAtIndex(6, 0);
	list.AddDataAtIndex(7, 2);

	EXPECT_EQ(7, list.GetData(1));
}

TEST(doublyLinkedList, SetNodeAtIndex) {

	DoubleLinkedList <int> list;

	list.CreateNode(6);
	list.CreateNode(7);
	list.CreateNode(10);

	list.AddDataAtIndex(15, 1);


	EXPECT_EQ(15, list.GetData(1));
}

TEST(doublyLinkedList, DelHead) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	aNewLinkedList.DeleteByPosition(0);
	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(6, aNewLinkedList.GetData(0));
}

TEST(doublyLinkedList, DelMiddle) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	
	aNewLinkedList.DeleteByPosition(1);

	EXPECT_EQ(8, aNewLinkedList.GetData(1));
}

TEST(doublyLinkedList, DelEnd) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);


	aNewLinkedList.DeleteByPosition(2);

	aNewLinkedList.CreateNode(14);


	EXPECT_EQ(14, aNewLinkedList.GetData(2));
}

TEST(doublyLinkedList, GetSizeOfDoubleLinkedList) {
	DoubleLinkedList<int> aNewLinkedList;
	aNewLinkedList.AddDataAtIndex(2, 0);
	aNewLinkedList.AddDataAtIndex(6, 1);
	aNewLinkedList.AddDataAtIndex(8, 2);

	EXPECT_EQ(3, aNewLinkedList.GetSize());
}


//TEST(doublyLinkedList, SetNodeAtIndex) {
//
//	DoubleLinkedList <int> list;
//
//	list.AddDataAtIndex(6, 0);
//	list.AddDataAtIndex(7, 2);
//	list.AddDataAtIndex(10, 1);
//
//	EXPECT_EQ(10, list.GetData(2));
//}
