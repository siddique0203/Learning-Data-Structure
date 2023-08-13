#include<iostream>
using namespace std;
int main(){
    int n,t,count=0;;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]<=t){
            count++;
        }
        else{
            count=count+2;
        }
    }
    cout<<count;
}
