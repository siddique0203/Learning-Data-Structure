#include<iostream>
#include<stack>
#include<string>
using namespace std;

class callLog{

private:
    string name;
    string callerNumber;
    string callTime;
public:
    callLog(string n,string cn,string time){
    name=n;
    callerNumber=cn;
    callTime=time;
    }

    string getname(){
    return name;
    }

    string getcn(){
    return callerNumber;
    }

    string gettime(){
    return callTime;
    }

};

int main(){

    stack<callLog> obj;

    obj.push(callLog("Abu Bakar Siddique","01752-369874","19:20:03"));
    obj.push(callLog("Abu Bakar  ","01152-389699","19:50:53"));
    obj.push(callLog("Siddique","09952-367823","20:30:13"));


    if(!obj.empty()){
    cout<<"*** Most recent Call ***"<<endl;
    cout<<"Neme: "<<obj.top().getname()<<endl;
    cout<<"Number: "<<obj.top().getcn()<<endl;
    cout<<"Time: "<<obj.top().gettime()<<endl;
    cout<<endl;}

    if(!obj.empty()){
    obj.pop();}

    if(!obj.empty()){
    cout<<"*** Most recent Call ***"<<endl;
    cout<<"Neme: "<<obj.top().getname()<<endl;
    cout<<"Number: "<<obj.top().getcn()<<endl;
    cout<<"Time: "<<obj.top().gettime()<<endl;
    cout<<endl;}

    if(!obj.empty()){
    obj.pop();}

    if(!obj.empty()){
    cout<<"*** Most recent Call ***"<<endl;
    cout<<"Neme: "<<obj.top().getname()<<endl;
    cout<<"Number: "<<obj.top().getcn()<<endl;
    cout<<"Time: "<<obj.top().gettime()<<endl;
    cout<<endl;}


}



