 /*
 Initialize TWO integer arrays of different sizes. Merge the input arrays and create a new array. Then print the new array in reverse order.

  For example,
  Array_1 = {10,20,30,40,50}
  Array_2 = {1,2,3,4,5,6,7,8}

  Output: 8 7 6 5 4 3 2 1 50 40 30 20 10
/*

#include<iostream>
using namespace std;
int main(){

    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/4;


    int arr1[]={1,2,3,4,5,6,7,8};
    int size1=sizeof(arr1)/4;


    int total=size+size1;
    int arr2[total] ;
    for(int i = 0; i < size1; i++){
        arr2[i] = arr1[size1 - i - 1];}

    for(int i = size1; i < total; i++){
        arr2[i] = arr[total - i - 1];}



    for(int i=0; i<total; i++){
        cout<<arr2[i]<<" ";
    }

}
