#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize top to -1, indicating an empty stack
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push element." << endl;
            return;
        }

        else{
                arr[++top] = value;
        cout << value << " pushed to the stack." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop element." << endl;
            return;
        }
        else{
        int value = arr[top--];
        cout << value << " popped from the stack." << endl;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else{
        return arr[top];
        }
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element of the stack: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    cout << "Top element of the stack: " << stack.peek() << endl;

    stack.pop();

    if (stack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}

