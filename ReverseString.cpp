#include<iostream>
using namespace std;
int main(){

    string name="siddique";
    string rev ;

    for(int i=(sizeof(name)/4); i>=0;i--){
            rev=rev+name[i]  ;

    }
    cout<<rev;


}
