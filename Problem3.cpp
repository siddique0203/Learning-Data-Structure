#include <iostream>
using namespace std;

class Node {
public:
    int id;
    string name;
    float cgpa;
    Node* left;
    Node* right;

    Node(int studentId, string studentName, float studentCGPA) {
        id = studentId;
        name = studentName;
        cgpa = studentCGPA;
        left = NULL;
        right = NULL;
    }
};


class StudentBST {
private:
    Node* root;


    Node* insertRecursive(Node* current, int studentId, string studentName, float studentCGPA) {
        if (current == NULL) {
            return new Node(studentId, studentName, studentCGPA);
        }

        if (studentId < current->id) {
            current->left = insertRecursive(current->left, studentId, studentName, studentCGPA);
        } else if (studentId > current->id) {
            current->right = insertRecursive(current->right, studentId, studentName, studentCGPA);
        }

        return current;
    }


    Node* searchRecursive(Node* current, int studentId) {
        if (current == NULL || current->id == studentId) {
            return current;
        }

        if (studentId < current->id) {
            return searchRecursive(current->left, studentId);
        } else {
            return searchRecursive(current->right, studentId);
        }
    }


    Node* findMin(Node* current) {
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }


    Node* deleteRecursive(Node* current, int studentId) {
        if (current == NULL) {
            return current;
        }

        if (studentId < current->id) {
            current->left = deleteRecursive(current->left, studentId);
        } else if (studentId > current->id) {
            current->right = deleteRecursive(current->right, studentId);
        } else {
            if (current->left == NULL) {
                Node* temp = current->right;
                delete current;
                return temp;
            } else if (current->right == NULL) {
                Node* temp = current->left;
                delete current;
                return temp;
            }

            Node* temp = findMin(current->right);
            current->id = temp->id;
            current->name = temp->name;
            current->cgpa = temp->cgpa;
            current->right = deleteRecursive(current->right, temp->id);
        }

        return current;
    }

public:
    StudentBST() {
        root = NULL;
    }


    void insert(int studentId, const string& studentName, float studentCGPA) {
        root = insertRecursive(root, studentId, studentName, studentCGPA);
    }


    Node* search(int studentId) {
        return searchRecursive(root, studentId);
    }


    void remove(int studentId) {
        root = deleteRecursive(root, studentId);
    }
};

int main() {
    StudentBST studentTree;

    studentTree.insert(1234, "Abu Bakar", 3);
    studentTree.insert(4567, "siddique", 3.5);
    studentTree.insert(7890, "John", 4);


    Node* foundStudent = studentTree.search(4567);
    if (foundStudent != NULL) {
        cout << "Student found: ID = " << foundStudent->id
                  << ", Name = " << foundStudent->name
                  << ", CGPA = " << foundStudent->cgpa << endl;
    } else {
        cout << "Student with ID not found." << endl;
    }

    int deleteId = 456;
    studentTree.remove(deleteId);
    cout << "Deleted student with ID " << deleteId <<endl;


}
