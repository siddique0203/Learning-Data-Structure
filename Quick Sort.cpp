#include <iostream>
using namespace std;

int Partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotind = Partition(arr, low, high);
        QuickSort(arr, low, pivotind - 1);
        QuickSort(arr, pivotind + 1, high);
    }
}

int main() {
    int arr[] = {54, 87, 89, 65, 32, 51, 87,45,989,56,23,88};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, arrSize - 1);

    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }


}
