#include<iostream>
#include<cstring>
using namespace std;
void Merge(char arr[], int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int B[ub+1];
    while(i<=mid && j<=ub){
        if(arr[i]<arr[j]){
            B[k]=arr[i];
            i++;
            k++;
        }
        else{
            B[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            B[k]=arr[j];
            j++;
            k++;
        }
    }
       else{
            while(i<=mid){
                B[k]=arr[i];
                i++;
                k++;
            }
        }

    for(int i=lb; i<=ub; i++){
        arr[i]=B[i];
    }


}
void MergeSort(char arr[], int lb ,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        MergeSort(arr,lb,mid);
        MergeSort(arr,mid+1,ub);
        Merge(arr,lb,mid,ub);
    }


}


int main(){

    char arr[]="MERGESORTEXAMPLE";
    int size= strlen(arr);

    MergeSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }


}
