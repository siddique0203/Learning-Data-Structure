
#include <iostream>
#include <string>

struct Student {
    std::string name;
    int id;
    float cgpa;
};

void insertionSort(Student arr[], int n) {
    for (int i = 1; i < n; ++i) {
        Student key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j].cgpa > key.cgpa) {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}

void bubbleSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(Student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].cgpa < arr[minIndex].cgpa) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

void displayStudents(Student arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Name: " << arr[i].name << std::endl;
        std::cout << "ID: " << arr[i].id << std::endl;
        std::cout << "CGPA: " << arr[i].cgpa << std::endl;
        std::cout << "-----------------\n";
    }
}

int binarySearch(Student arr[], int left, int right, float targetCGPA) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid].cgpa == targetCGPA) {
            return mid;
        }

        if (arr[mid].cgpa > targetCGPA) {
            return binarySearch(arr, left, mid - 1, targetCGPA);
        }

        return binarySearch(arr, mid + 1, right, targetCGPA);
    }

    return -1;
}

int main() {
    const int size = 4;
    Student students[size];

    // Input student details
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> students[i].name;
        std::cout << "ID: ";
        std::cin >> students[i].id;
        std::cout << "CGPA: ";
        std::cin >> students[i].cgpa;
        std::cout << "-----------------\n";
    }

int option;
do {
    // Display menu
    std::cout << "\nMenu:\n";
    std::cout << "1. Input students details\n";
    std::cout << "2. Apply insertion sort\n";
    std::cout << "3. Apply bubble sort\n";
    std::cout << "4. Apply selection sort\n";
    std::cout << "5. Show elements\n";
    std::cout << "6. Apply binary search (search by CGPA)\n";
    std::cout << "7. Exit\n";
    std::cout << "Enter your choice (1-7): ";
    std::cin >> option;

    switch (option) {
        case 1:
            // Input students details
            for (int i = 0; i < size; ++i) {
                std::cout << "Enter details for student " << i + 1 << ":\n";
                std::cout << "Name: ";
                std::cin >> students[i].name;
                std::cout << "ID: ";
                std::cin >> students[i].id;
                std::cout << "CGPA: ";
                std::cin >> students[i].cgpa;
                std::cout << "-----------------\n";
            }
            break;

        case 2:
            // Apply insertion sort
            insertionSort(students, size);
            std::cout << "Applied insertion sort.\n";
            break;

        case 3:
            // Apply bubble sort
            bubbleSort(students, size);
            std::cout << "Applied bubble sort.\n";
            break;

        case 4:
            // Apply selection sort
            selectionSort(students, size);
            std::cout << "Applied selection sort.\n";
            break;

        case 5:
            // Show elements
            displayStudents(students, size);
            break;

        case 6: {
            // Apply binary search (search by CGPA)
            float targetCGPA;
            std::cout << "Enter CGPA to search: ";
            std::cin >> targetCGPA;
            int left = 0;
            int right = size - 1;
            int searchResult = binarySearch(students, left, right, targetCGPA);
            if (searchResult != -1) {
                std::cout << "Student with CGPA " << targetCGPA << " found at index " << searchResult << std::endl;
            } else {
                std::cout << "Student with CGPA " << targetCGPA << " not found.\n";
            }
            break;
        }

        case 7:
            // Exit
            std::cout << "Exiting program.\n";
            break;

        default:
            std::cout << "Invalid option. Please try again.\n";
    }

} while (option != 7);

return 0;
}
    