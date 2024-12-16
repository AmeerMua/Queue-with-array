#include "Queue.h"
#include <iostream>
#include<conio.h>
using namespace std;

Queue:: Queue()
{
	size = 5;
	length = 0;
	front = -1;
	rear = -1;
	qData = new int[size];
}
bool Queue:: isEmpty()
{
	if(length == 0)
	{
		return true;

	}
	else
	{
		return false;
	}
}
bool Queue ::isFull()
{
	if (length == size)
	{
		return true;
	}
	else
	{
		false;
	}
}
void Queue::enQueue(int value)
{
	if(isEmpty())
	{
		qData[rear + 1] = value;
		rear = rear+1;
		front = front+1;
		length++;
		//cout <<length<<endl;
		cout<<"Inserted"<<endl;
	}
	else if (length < size)
	{
		rear = (rear+1) % size;
		qData [rear] = value;
		length++;
		cout<<"Sucessfully Inserted"<<endl;
	}
	else
	{
		cout<<"Queue is Full"<<endl;
	}
}
void Queue:: print()
{
	if(front==-1)
	{
		cout<<"Empty"<<endl;
	}
	else if(rear<front)
	{
		for(int i =front; i<size;i++)
		{
			cout<<qData[i]<<endl;

		}
		for(int i= 0; i<=rear ; i++)
		{
			cout<<qData[i]<<endl;
		}
	}
	else
	{
		for(int i= front; i<= rear; i++)
		{
			cout<<qData[i]<<endl;
		}
	}
}