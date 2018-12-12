#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;

template<class T>
class Stack {
public:
	Stack()
	{
	}

	void AddToStack(T stuff){
		ourStack.push_back(stuff);
	}

	void RemoveFromStack ()	{
		ourStack.pop_back();
	}

	T GetFromTop(){
		return ourStack.back();
	}

	int GetSize() {
		return ourStack.size();
	}
private:
	vector <T> ourStack;
	
};

