#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[1000];
    cin >> s;
    cout << (char)toupper(s[0]);


    int length = strlen(s);


    for (int i = 1; i < length; i++) {
        cout << s[i];
    }


}
