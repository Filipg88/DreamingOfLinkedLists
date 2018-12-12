#include "pch.h"
#include "../DreamingOfLinkedLists/stack.h"


TEST(StackTests, AddingElementsShouldStoreCorrectly) {
	
	Stack<int> myStack;
	myStack.AddToStack(5);
	myStack.AddToStack(10);

	
	EXPECT_EQ(10, myStack.GetFromTop());
}

TEST(StackTests, WhenRemovingElementsShouldLIFO) {

	Stack<int> myStack;
	myStack.AddToStack(5);
	myStack.AddToStack(10);

	myStack.RemoveFromStack();

	EXPECT_EQ(5, myStack.GetFromTop());
}

TEST(StackTests, ReturnCorrectSizeAfterUsingAddAndDeleteFunctions) {

	Stack<int> myStack;
	myStack.AddToStack(5);
	myStack.AddToStack(10);
	myStack.RemoveFromStack();

	EXPECT_EQ(1, myStack.GetSize());
}