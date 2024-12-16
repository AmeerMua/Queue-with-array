class Queue
{
private:
			int size;
			int length;
			int front;
			int rear;
			int* qData;

public:
		Queue();
		void enQueue(int);
		void deQueue();
		bool isEmpty();
		bool isFull();
		void print();
};
