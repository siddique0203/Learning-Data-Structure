#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 6, 8, 6, 1, 2, 9, 7,58,30,99};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size ; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
