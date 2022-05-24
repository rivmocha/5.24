#include <iostream>
#include <string>
#include <stack>



using namespace std;


template<typename T>
class Queue
{
public:
	Queue() {}
	virtual ~Queue() {}

	T Database[10];

	int Cursor = -1;
	int Cursor2 = 0;



	void QueueC(T A)
	{
		Database[++Cursor] = A;
	}


	T Deque()
	{
		return Database[Cursor2++];
	}

	
};


int main()
{

	
	Queue<int> Intqueue;


	for (int i = 1; i <= 10; ++i)
	{
		Intqueue.QueueC(i);
	}
	

	for (int i = 1; i <= 10; ++i)
	{
		cout << Intqueue.Deque() << ", ";
	}


	
		
	
	return 0;
}