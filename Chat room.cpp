#include <iostream>
using namespace std;

int main() {
    string s;
    int a = 0;
    string x = "hello";
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == x[a]) {
            a++;
        }
        if (a >= 5) {
            break;
        }
    }

    if (a >= 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
