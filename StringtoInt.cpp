#include<iostream>
using namespace std;

int StringtoInt(string str){
    int temp=0;
    for(int i=0; i<str.length();i++){
        temp=10*temp+(str[i]-'0');
    }
    return temp;
    }
int main(){
    string str="456789";
    int num=StringtoInt(str);
    cout<<num;




}
