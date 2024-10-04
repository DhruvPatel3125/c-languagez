/* Simple Queue Program Using Class and Memeber Functions in C++*/
/* Data Structure C++ Programs,C++ Array Examples */

#include <iostream.h>
#include<conio.h>
#include<stdlib.h>

class Queue {
    int n,i,front,rear;
    int arr_queue[5];
   // int rear;
   // int front;

public:
    Queue()
    {
	rear =0;
	front = 0;
    }
    void insert() {
	if (rear == 5)
	    cout << "\nQueue Overflow on Insert!";
	else {
	    cout << "\nEnter The Value to be Insert : ";
	    cin>>n;
	    cout << "\nPosition :"<< rear + 1 <<",Insert Value:"<<n;
	    arr_queue[rear++] =n;
	}
    }
    void removeData() {
	if (front == rear)
	    cout <<"\n Queue is Empty!";
	else {
	    cout<<"\nPosition:"<<front<<",Remove Value:"<< arr_queue[front];
	    front++;
	}
    }
    void display() {
	cout << "\n Queue Size : " << (rear - front);
	for (i = front; i < rear; i++)
	{
	    cout << "\n Position : " << i << ",Value  : " << arr_queue[i];
	}
    }
};
void main() {
clrscr();
    int choice;
    Queue obj;
    while(1) {
	cout << "\n1.Insert \n2.Remove \n3.Display \n4.exit";
	cout << "\nEnter Your Choice : ";
	cin>>choice;
	switch (choice) {
	    case 1:
		obj.insert();
		break;
	    case 2:
		obj.removeData();
		break;
	    case 3:
		obj.display();
		break;
	    case 4:
		exit(0);
	}
    }
	getch();
}