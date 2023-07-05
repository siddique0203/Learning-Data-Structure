#include<iostream>
#include<string>

using namespace std;

struct Student{
    string name;
    string id;
    float cgpa;
};

void BubbleSort(Student arr[],int n){
    for(int i=0; i<n -1;i++){
        for(int j=0; j<n -1; j++){
            if(arr[j].cgpa>arr[j+1].cgpa){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void SelectionSort(Student arr[],int n){
     for (int i = 0; i < n ; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j].cgpa < arr[minIndex].cgpa) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i].cgpa, arr[minIndex].cgpa);
        }
    }
}

void insertionSort(Student arr[], int n) {
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[i].cgpa<arr[j].cgpa){
                swap(arr[i],arr[j]);
            }

        }
    }
}

void display(Student arr[],int n){
    for(int i=0; i<n; i++){
        cout<<"Information of Student-"<<i+1<<endl;
        cout<<"Name: "<<arr[i].name<<endl;
        cout<<"Id: "<<arr[i].id<<endl;
        cout<<"CGPA: "<<arr[i].cgpa<<endl;
        cout<<"....................."<<endl;
    }
}

int binarySearch(Student arr[], int left, int right, float targetCGPA) {
    if (right >= left) {
        int mid = (left + right) / 2;

        if (arr[mid].cgpa == targetCGPA) {
            return mid;
        }

        if (arr[mid].cgpa > targetCGPA) {
            return binarySearch(arr, left, mid - 1, targetCGPA);
        }
        else{
        return binarySearch(arr, mid + 1, right, targetCGPA);
        }
    }

    return -1;
}

int main(){

    int size=4;
    Student students[size];
    bool isEmpty=false;


 int option;

    cout << "0. Input 4 students details\n";
    cout << "1. Apply insertion sort\n";
    cout << "2. Apply bubble sort\n";
    cout << "3. Apply selection sort\n";
    cout << "4. Show elements\n";
    cout << "5. Apply binary search (search by CGPA)\n";
    cout << "6. Exit\n";
    cout << "Enter your choice (0-6): ";
    cin >> option;

    while(option<6 && option>=0){
        switch(option){

        case 0:for(int i=0; i<size; i++){
                cout<<"Enter Details of Student- "<<i+1<<endl;
                cout<<"Name: ";
                cin>>students[i].name;
                cout<<"ID: ";
                cin>>students[i].id;
                cout<<"CGPA: ";
                cin>>students[i].cgpa;
                cout<<"\n";
                }
                isEmpty=false;

                break;

        case 1: if(isEmpty==true){
                 insertionSort(students,size);
                    cout<<"Applied insertion sort"<<endl;}
                else{
                        cout<<"Enter student information";
                    }
                 break;

        case 2: if(isEmpty==true){
                    BubbleSort(students,size);
                        cout<<"Applied bubble sort"<<endl;}
                else{
                    cout<<"Enter student information";
                }
                break;

        case 3: if(isEmpty==true){
                SelectionSort(students,size);
                    cout<<"Applied bubble sort"<<endl;}
                 else{
                     cout<<"Enter student information";
                 }
                    break;

        case 4: if(isEmpty==true){
                    display(students,size);}
                else{
                     cout<<"Enter student information";
                 }
                break;

        case 5: if(isEmpty==true){
                 {
                    float targetCGPA;
                    cout<<"Enter Cgpa to search: ";
                    cin>>targetCGPA;
                    int left=0,right=size-1;

                    int result= binarySearch(students ,  left,   right, targetCGPA);
                    if(result !=-1){
                        cout<<"Found CGPA at index number: "<<result<<endl;
                    }
                    else{
                        cout<<"CGPA not found"<<endl;
                    }
                 }

               }
               else{cout<<"Enter student information";}
                 break;
    }

    return 0;


    }





}




