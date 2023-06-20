#include<iostream>
using namespace std;
void sort(int A[],int num){
    for(int i=0; i<num-1;i++){
        for(int j=0; j<num-1; j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }

}
int main(){


    int A[]={80,26,45,32,12,5,100,2,65,025,99};
    int num=sizeof(A)/4;
    sort(A,num);
    for(int i=0; i<num; i++){
        cout<<A[i]<<"  ";
    }









}
