#include<iostream>
using namespace std;
int main(){
    int n,ser=0,dim=0;
    bool flag=true;
    cin>>n;
    int arr[n];
    int start=0, end=n-1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(flag){
            if(arr[start]>arr[end])
                {
                    ser+=arr[start];
                    start=start+1;
                }
            else{
                ser+=arr[end];
                end=end-1;
            }
            flag= !flag;
        }
        else{
             if(arr[start]>arr[end])
                {
                    dim+=arr[start];
                    start=start+1;
                }
            else{
                dim+=arr[end];
                end=end-1;
            }
            flag=!flag;
        }

    }

    cout<<ser<<" "<<dim;
}
