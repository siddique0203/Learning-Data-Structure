#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};


class BinarySearchTree {
private:
    Node* root;

    Node* insertRecursive(Node* current, int value) {
        if (current == nullptr) {
            return new Node(value);
        }

        if (value < current->data) {
            current->left = insertRecursive(current->left, value);
        } else if (value > current->data) {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

public:
    BinarySearchTree() {
        root = nullptr;
    }


    void insert(int value) {
        root = insertRecursive(root, value);
    }


    void inOrderTraversal(Node* current) {
        if (current != nullptr) {
            inOrderTraversal(current->left);
            cout << current->data << " ";
            inOrderTraversal(current->right);
        }
    }


    bool search(int value, Node* current) {
        if (current == nullptr) {
            return false;
        }

        if (value == current->data) {
            return true;
        } else if (value < current->data) {
            return search(value, current->left);
        } else {
            return search(value, current->right);
        }
    }
};

int main() {
    BinarySearchTree bst;

    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);

    cout << "In-order Traversal: ";
    bst.inOrderTraversal(bst.getRoot());
    cout << endl;

    int searchValue = 4;
    if (bst.search(searchValue, bst.getRoot())) {
        cout << searchValue << " found in the BST." << endl;
    } else {
        cout << searchValue << " not found in the BST." << endl;
    }


}

