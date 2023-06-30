#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];

    cin >> s;
    int length = strlen(s);

    for(int i=0; i<length; i++){
      s[i]=(char)tolower(s[i]);
    }

    for (int i = 0; i < length; i++) {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            continue;
         }
         else{
            cout<<"."<<s[i];
         }
    }


}
