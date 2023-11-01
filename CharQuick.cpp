#include<iostream>
#include<cstring>
using namespace std;
int partition(char arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void QuickSort(char arr[], int low, int high){
    if(low<high){
        int pivotind=partition(arr,low,high);
        QuickSort(arr, low, pivotind-1);
        QuickSort(arr, pivotind+1, high);

    }
}
int main(){


    char arr[]="QUICKSORTEXAMPLE";
    int size= strlen(arr);

    QuickSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }

}
