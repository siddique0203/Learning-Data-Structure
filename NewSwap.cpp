#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter 1st number: ";
    cin>>n;
    cout<<"Enter 2nd number: ";
    cin>>m;

    n=n+m;
    m=n-m;
    n=n-m;
    cout<<"1st number after swap: "<<n<<"\n2nd number after swap: "<<m;

}
