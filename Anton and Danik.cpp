#include<iostream>
using namespace std;

int main(){
    int n,d=0,a=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='D'){
            d++;
        }
    }

    if(a>d){
        cout<<"Anton";
     }
     else if(a<d){
        cout<<"Danik";
     }
     else{
        cout<<"Friendship";
     }

}
