#include<iostream>
using namespace std;
int main(){

    string n ;
    cin>>n;
   int s=0,m=0,c=0;
   for(int i=0; i<n.size(); i++){

        if(n[i]=='1'){
            s++;
            m=0;
        }
        else{
            m++;
            s=0;
        }
        if(m>=7 || s>=7){ c=1;}
   }

   if(c==1){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }

}
