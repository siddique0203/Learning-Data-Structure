#include<iostream>
using namespace std;
int main(){

 int a;
 string n;
 cin>>a;
    while( a-- ){
        cin>>n;
        if(n.length()>10)
            {
              cout<<n[0]<<n.length()-2<<n[n.length()-1]<<endl;
            }

       else{cout<<n<<endl;}


}














}
