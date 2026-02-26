#include <iostream>
using namespace std;

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if(rear == MAX - 1) {
        cout << "Queue Overflow" << endl;
    } 
    else {
        if(front == -1)  // first element
            front = 0;
        
        rear++;
        queue[rear] = value;
        cout << value << " inserted into queue" << endl;
    }
}

void dequeue() {
    if(front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
    } 
    else {
        cout << queue[front] << " removed from queue" << endl;
        front++;
    }
}

void peek() {
    if(front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } 
    else {
        cout << "Front element is " << queue[front] << endl;
    }
}

void display() {
    if(front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } 
    else {
        cout << "Queue elements (front to rear): ";
        for(int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 5);

    return 0;
} queue
