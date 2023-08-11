#include <iostream>
using namespace std;

int main() {
    string s, t, n;
    cin >> s >> t;

    for (int i = t.size() - 1; i >= 0; i--) {
        n.append(1, t[i]);
    }

    if (s == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
