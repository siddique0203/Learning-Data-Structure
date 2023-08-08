#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter number of students  ";
    cin>>n;
    int students[n];
    for(int i=0; i<n; i++)
    {
        cout<<"number of student(" << i+1 << ")   "; //students[i]=students mark
        cin >>students[i];//students[i]=students mark
        sum = sum+students[i];//students[i]=students mark
    }

    float avg=(float)sum/n;
    cout<<"total marks   "<<sum<<endl;
    cout<<"avarage marks   "<<avg<<endl;

    int max=students[0];

    int min=students[0];

    for(int i=1; i<n; i++)
    {
        if(max<students[i])
        {
            max= students[i];
        }
        if(min>students[i])
        {
            min= students[i];
        }

        }
        cout<<"maximum number"<<max<<endl;
        cout<<"minimum number"<<min<<endl;
}