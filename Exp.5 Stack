#include <iostream>
using namespace std;

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX-1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed to stack" << endl;
    }
}

void pop() {
    if(top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }
}

void peek() {
    if(top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element is " << stack[top] << endl;
    }
}

void display() {
    if(top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements (top to bottom): ";
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
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
}
