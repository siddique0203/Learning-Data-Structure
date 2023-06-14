#include<iostream>
using namespace std;
int main(){

    int arr[5]={10,20,30,40,50};
    int size=sizeof(arr)/4;


    int arr1[8]={1,2,3,4,5,6,7,8};
    int size1=sizeof(arr1)/4;



    for(int i=size1-1; i>=0; i--){
            cout<<arr1[i]<<" ";

    }
    for(int i=size-1; i>=0; i--){
            cout<<arr[i]<<" ";

    }














}
