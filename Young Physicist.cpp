#include<iostream>
using namespace std;
int main(){
    int n,x,y,z;
    int sum1=0,sum2=0,sum3=0;

    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        sum1=sum1+x;
        sum2=sum2+y;
        sum3+=z;
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
