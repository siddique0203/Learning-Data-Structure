#include<iostream>
using namespace std;
int main()

{
   int n,p=0;
   string x;

   cin>>n;

   while(n--)
    {
       cin>>x;

       if(x[0]=='-'||x[2]=='-')

       {
           p--;
       }

       else if(x[0]=='+'||x[2]=='+')

       {
           p++;
       }
   }
   cout<<p<<endl;

}
