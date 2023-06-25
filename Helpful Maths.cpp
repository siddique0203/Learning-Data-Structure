#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int arr[n/2 + 1];
    int k = 0;


    for (int i = 0; i < n; i += 2) {
        arr[k++] = s[i] - '0';
    }


    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }


    for (int i = 0; i < k; i++) {
        cout << arr[i];
        if (i != k - 1) {
            cout << "+";
        }
    }


}
