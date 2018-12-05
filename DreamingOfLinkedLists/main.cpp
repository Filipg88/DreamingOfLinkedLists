#include <iostream>
#include <vector>
#include <string>
#include "Queue.h"
#include <algorithm>

using namespace std;

int main()
{
	//Queue *newQue = new Queue;
	//Queue aQue;
	//aQue.addToQueue(5);
	//aQue.GetData();

	vector <int> myvec;

	//Stack <int> myStack;

	myvec.push_back(5);
	myvec.push_back(2);
	myvec.push_back(10);

	myvec.erase(myvec.end()-1);






	//cout << "Success" << endl;
	cin.get();

	return 0;
}