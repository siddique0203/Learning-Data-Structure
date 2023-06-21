#include<iostream>
using namespace std;

int main() {
    int arr[] = {45,46,234,46,23,4,5,489,4165,321,031,1561,11,6,5465,456};
    int size = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < size  ; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                int n = arr[j];
                arr[j] = arr[i];
                arr[i] = n;
            }
        }
    }

    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }


}
