#include <iostream>
#include <conio.h>
#include "Queue.h"
using namespace std;

int main() 
{
    Queue queue;

    cout << "Enqueuing elements into the queue:" << endl;
    queue.enQueue(10);  
    queue.enQueue(20);  
    queue.enQueue(30);  
    queue.enQueue(40);  
    queue.enQueue(50);  

    
    queue.print();

    cout << endl;
    queue.enQueue(60);  
    cout  << endl;
    
    queue.deQueue();  
    cout << endl;
    queue.print();

    getch(); 
    return 0;
}
