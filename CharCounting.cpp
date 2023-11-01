#include<iostream>
#include<cstring>
using namespace std;
void CountingSort(char arr[], int max, int size){
    int count[max];
    int output[size];

    for(int i=0; i<max; i++){
        count[i]=0;
    }
    for(int i=0; i<size; i++){
       count[arr[i]]++;
    }
    for(int i=0; i<max; i++){
        count[i]=count[i-1]+count[i];
    }
    for(int i=0; i<size; i++){
       output[count[arr[i]]--] =arr[i];
    }

    for(int i=0; i<size; i++){
         arr[i]=output[i];
    }


}


int main(){


    char arr[]="COUNTINGSORTEXAMPLE";
    int size= strlen(arr);

    int max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    CountingSort(arr, max, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }

}
