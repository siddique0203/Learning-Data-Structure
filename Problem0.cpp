#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insertion
    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Traversal and display o
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Searching
    bool search(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Deletion
    void remove(int value) {
        if (head == nullptr) {
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            if (current->next->data == value) {
                Node* temp = current->next;
                current->next = temp->next;
                delete temp;
                return;
            }
            current = current->next;
        }
    }
};

int main() {
    LinkedList list;

    list.insert(5);
    list.insert(10);
    list.insert(15);

    cout << "Linked List: ";
    list.display();

    int searchValue = 15;
    if (list.search(searchValue)) {
        cout << searchValue << " found in the linked list." << endl;
    } else {
        cout << searchValue << " not found in the linked list." << endl;
    }

    int deleteValue = 10;
    list.remove(deleteValue);
    cout << "Linked List after deleting " << deleteValue << ": ";
    list.display();


}
