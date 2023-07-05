#include<iostream>
using namespace std;

int main(){

    int up=0,low=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])){
            up++;
        }
        else{
            low++;
        }
    }

    if(up>low){
      for(int i=0; i<s.size();i++){
           s[i]=toupper(s[i]);
      }
      cout<<s;
    }
    else{
        for(int i=0; i<s.size();i++){
           s[i]=tolower(s[i]);
      }
      cout<<s;
    }

}
