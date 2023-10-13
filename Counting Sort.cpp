#include<iostream>
using namespace std;
void CSort(int arr[],int n,int k){
    int count[k];
    for(int i=0; i<=k; i++){
        count[i]=0;
    }
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=1; i<=k; i++){
        count[i]=count[i]+count[i-1];
    }
    int second[n];
    for(int i=n-1; i>=0; i--){
        second[--count[arr[i]]]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=second[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}

int main(){

    int n,k;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Maximum number in array: ";
    cin>>k;
    int arr[n];
    cout<<"Enter "<<n<<" numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    CSort(arr,n,k);






}
