#include<iostream>
using namespace std;
int main(){

    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];

    cout<<"Input the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Elements are: "<<endl;
     for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    int min=arr[0];
    int max=arr[0];


     for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }

      for(int i=0; i<size; i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }

    cout<<"The Highest Value is: "<<max<<endl;
    cout<<"The Lowest value is: "<<min<<endl;
    cout<<"In Reverse Order: "<<endl;
     for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

}
