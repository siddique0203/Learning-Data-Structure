#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int  Occupancy,Capacity;
        cin >>Occupancy >>Capacity;

        if ((Capacity -Occupancy) >= 2) {
            count++;
        }
    }
    cout << count;

}
