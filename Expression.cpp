#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int res[]={a+b*c, a*(b+c), a*b*c, a+b+c, (a+b)*c};
    int max=res[0];
    for(int i=0; i<=4; i++){
        if(max<res[i]){
            max=res[i];
        }
    }
    cout<<max;
}
