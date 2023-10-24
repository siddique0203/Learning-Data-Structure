#include<iostream>
using namespace std;

void Merge(int arr[],int lb,int mid, int ub){

     int i=lb;
     int j=mid+1;
     int k=lb;
     int b[ub+1];
     while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
     }

     if(i>mid){
        while(j<=ub){
            b[k]=arr[j];
            j++;
            k++;
        }
     }
     else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
     }
      for(int i=lb; i<=ub; i++){
        arr[i]=b[i];
    }

}

void MergeSort(int arr[],int lb, int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        MergeSort(arr ,lb, mid);
        MergeSort(arr ,mid+1,ub);
        Merge(arr,lb,mid,ub);

    }

}
int main(){

    int arr[]={54,89,65,32,54,87,98,96,99,66,77};
    int size=sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}
