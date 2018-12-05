#include "pch.h"
#include "../DreamingOfLinkedLists/stack.h"


TEST(StackTests, WhenAddingElement) {
	
	Stack<int> myStack;
	myStack.AddToStack(5);
	
	EXPECT_EQ(5, myStack.GetFromTop());
}

TEST(StackTests, WhenRemovingShouldLIFO) {

	Stack<int> myStack;
	myStack.AddToStack(5);
	myStack.AddToStack(10);

	myStack.RemoveFromStack();

	EXPECT_EQ(5, myStack.GetFromTop());
}

TEST(StackTests, WhenGettingSizeShouldReturnTheRightSize) {

	Stack<int> myStack;
	myStack.AddToStack(5);
	myStack.AddToStack(10);

	EXPECT_EQ(2, myStack.GetSize());
}

//size 