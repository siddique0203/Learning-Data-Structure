#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

     set<char> distinctChars;

    for (int i = 0; i < username.length(); i++) {
        char ch = username[i];
        distinctChars.insert(ch);
    }

    int distinctCount = distinctChars.size();

    if (distinctCount % 2 == 0) {
         cout << "CHAT WITH HER!" << endl;
    } else {
         cout << "IGNORE HIM!" << endl;
    }


}
