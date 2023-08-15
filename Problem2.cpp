#include <iostream>
using namespace std;

class Node {
public:
    int id;
    string name;
    float cgpa;
    Node* left;
    Node* right;

    Node(int studentId,string studentName, float studentCGPA) {
        id = studentId;
        name = studentName;
        cgpa = studentCGPA;
        left = nullptr;
        right = nullptr;
    }
};


class StudentBST {
private:
    Node* root;

    Node* insertRecursive(Node* current, int studentId, const string& studentName, float studentCGPA) {
        if (current == nullptr) {
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
        if (current == nullptr || current->id == studentId) {
            return current;
        }

        if (studentId < current->id) {
            return searchRecursive(current->left, studentId);
        } else {
            return searchRecursive(current->right, studentId);
        }
    }

public:
    StudentBST() {
        root = nullptr;
    }


    void insert(int studentId,string studentName, float studentCGPA) {
        root = insertRecursive(root, studentId, studentName, studentCGPA);
    }


    Node* search(int studentId) {
        return searchRecursive(root, studentId);
    }
};

int main() {
    StudentBST studentTree;

    studentTree.insert(123, "Siddique", 3);
    studentTree.insert(456, "Abu bakar siddique", 4);


    Node* foundStudent = studentTree.search(456);
    if (foundStudent != nullptr) {
        cout << "Student found: ID = " << foundStudent->id
                  << ", Name = " << foundStudent->name
                  << ", CGPA = " << foundStudent->cgpa << endl;
    } else {
        cout << "Student with ID not found." << endl;
    }


}
