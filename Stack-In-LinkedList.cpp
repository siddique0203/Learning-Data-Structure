#include <iostream>
#include <stack>
#include<ctime>
using namespace std;

struct Transaction {
    int transId;
    int fromId;
    double amount;
    time_t time;
};

struct Node {
    stack<Transaction> transactions;
    Node* prev;
    Node* next;
};

void showTransactions(Node* head) {
    Node* current = head;
    int listNumber = 1;

    while (current != nullptr) {
        cout << "**List " << listNumber << " Transactions:**" << endl;
        stack<Transaction> transStack = current->transactions;
        while (!transStack.empty()) {
            Transaction trans = transStack.top();

            cout << "TransID: " << trans.transId << "\nFromID: " << trans.fromId << "\nAmount: " << trans.amount
                 << "\nTime: " << ctime(&trans.time)<<endl;
            transStack.pop();
        }
        cout << endl;
        current = current->next;
        listNumber++;
    }
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;

    auto addTransaction = [&](int transId, int fromId, double amount, time_t time) {
        Transaction newTransaction = {transId, fromId, amount, time};

        if (head == nullptr) {
            head = new Node{stack<Transaction>(), nullptr, nullptr};
            head->transactions.push(newTransaction);
            tail = head;
        } else {
            if (tail->transactions.size() < 3) {
                tail->transactions.push(newTransaction);
            } else {
                Node* newNode = new Node{stack<Transaction>(), tail, nullptr};
                newNode->transactions.push(newTransaction);
                tail->next = newNode;
                tail = newNode;
            }
        }
    };

    addTransaction(1, 101, 100, time(nullptr));
    addTransaction(2, 102, 200, time(nullptr));
    addTransaction(3, 103, 300, time(nullptr));
    addTransaction(4, 104, 400, time(nullptr));
    addTransaction(5, 105, 500, time(nullptr));

    showTransactions(head);


}
