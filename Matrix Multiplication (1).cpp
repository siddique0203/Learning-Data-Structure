#include<iostream>
using namespace std;
int main(){

    int ar[3][3]={2,4,6,
                  9,8,7,
                  6,3,5};

    int arr[3][3]={4,5,9,
                   8,7,2,
                   1,3,6};

    int res[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             res[i][j]=0;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                res[i][j]+=ar[i][k]*arr[k][j];
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }

}
