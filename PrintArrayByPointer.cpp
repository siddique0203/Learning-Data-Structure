#include<iostream>
using namespace std;
int main(){

    int arr[5]={10,25,65,98,3};
    int *ptr;

     ptr=&arr[0];

     for(int i=0; i<5; i++){
        cout<<*ptr<<endl;
        ptr++;
      }
}
