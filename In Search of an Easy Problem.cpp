#include<iostream>
using namespace std;
int main(){

    int n;
    bool count=false;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    for(int i=0; i<n; i++){
        if(s[i]=="1"){
            count=true;
            break;
        }
    }

    if(count){
        cout<<"HARD";
    }
    else if(!count){
        cout<<"EASY";
    }








}
