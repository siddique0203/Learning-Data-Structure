#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (true) {
        n++;

        int w = n / 1000;
        int x = (n / 100) % 10;
        int y = (n / 10) % 10;
        int z = n % 10;

        if (w != x && w != y && w != z && x != y && x != z && y != z) {
            cout << n;
            break;
        }
    }
}
