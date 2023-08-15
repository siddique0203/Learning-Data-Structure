#include <iostream>
#include <ctime>
using namespace std;

const int MAX_TRANSACTIONS = 3;

struct Transaction {
    int transactionId;
    double amount;
    time_t time;
};

struct Stack {
    Transaction transactions[MAX_TRANSACTIONS];
    int top=-1;



    bool isEmpty()  {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_TRANSACTIONS - 1;
    }

    void push(const Transaction trans) {
        if (!isFull()) {
            transactions[++top] = trans;
        }
    }

    void pop() {
        if (!isEmpty()) {
            --top;
        }
    }

    const Transaction& peek(){
        if (!isEmpty()) {
            return transactions[top];
        }

    }
};

struct Node {
    Stack transactions;
    Node* next;
};

void showTransactions(Node* head) {
    Node* current = head;
    int listNumber = 1;

    while (current != NULL) {
        cout << "List " << listNumber << " Transactions:" << endl;
        for (int i = 0; i <= current->transactions.top; ++i) {
            Transaction& trans = current->transactions.transactions[i];
            cout << "Transaction ID: " << trans.transactionId << "\nAmount: " << trans.amount
                 << "\nTime: " << ctime(&trans.time);
        }
        cout << endl;
        current = current->next;
        listNumber++;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    auto addTransaction = [&](int transactionId, double amount, time_t time) {
        Transaction newTransaction = {transactionId, amount, time};

        if (tail == NULL || tail->transactions.isFull()) {
            Node* newNode = new Node;
            newNode->transactions.top = -1;
            newNode->next = NULL;

            if (tail == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        tail->transactions.push(newTransaction);
    };

    addTransaction(1, 100.0, time(NULL));
    addTransaction(2, 200.0, time(NULL));
    addTransaction(3, 300.0, time(NULL));
    addTransaction(4, 400.0, time(NULL));
    addTransaction(5, 500.0, time(NULL));

    showTransactions(head);


}
