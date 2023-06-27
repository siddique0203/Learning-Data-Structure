#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=0, b=1, fib;
    if(n==a || n==b){cout<<" Is a Fibonacci Number";}
      else{
        fib=a+b;
        while(fib<n)
        {
            a=b;
            b=fib;
            fib=a+b;
        }
        if(fib==n){cout<<n<<" Is a Fibonacci Number";}
        else{cout<<n<<" Is Not a Fibonacci Number";}
    }
}
