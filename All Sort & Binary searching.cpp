#include<iostream>
#include<string>

using namespace std  ;

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

          int size = 4;
          bool isEmpty=true;
          Student students[size];

int option;
do {
     cout << "Menu:\n";
     cout << "1. Input students details\n";
     cout << "2. Apply insertion sort\n";
     cout << "3. Apply bubble sort\n";
     cout << "4. Apply selection sort\n";
     cout << "5. Show elements\n";
     cout << "6. Apply binary search (search by CGPA)\n";
     cout << "7. Exit\n";
     cout << "Enter your choice (1-7): ";
     cin >> option;
     cout<<endl;

    switch (option) {
        case 1:

            for (int i = 0; i < size; ++i) {
                 cout << "Enter details for student |" << i + 1 << "|:\n";
                 cout << "Name: ";
                 cin >> students[i].name;
                 cout << "ID: ";
                 cin >> students[i].id;
                 cout << "CGPA: ";
                 cin >> students[i].cgpa;
                 cout << ".................\n";
            }
            isEmpty=false;
            break;

        case 2: if(isEmpty==false){

            insertionSort(students, size);
             cout << "Applied insertion sort.\n";}
             else{
            cout<<"***Enter Student Information***"<<endl;
              }
            break;

        case 3: if(isEmpty==false){

            BubbleSort(students, size);
             cout << "Applied bubble sort.\n";}

             else{
            cout<<"***Enter Student Information***"<<endl;
             }
            break;

        case 4: if(isEmpty==false){

            SelectionSort(students, size);
             cout << "Applied selection sort.\n";}

             else{
            cout<<"***Enter Student Information***"<<endl;
             }
            break;

        case 5: if(isEmpty==false){

            display(students, size);}
            else{
            cout<<"***Enter Student Information***"<<endl;
             }
            break;

        case 6: if(isEmpty==false){

            {
            float targetCGPA;
             cout << "Enter CGPA to search: ";
             cin >> targetCGPA;
            int left = 0;
            int right = size - 1;
            int searchResult = binarySearch(students, left, right, targetCGPA);
            if (searchResult != -1) {
                 cout << "Student with CGPA " << targetCGPA << " found at index " << searchResult <<  ::endl;
                  }
             else {
                 cout << "Student with CGPA " << targetCGPA << " not found.\n";
                  }
            }

        }
        else{
            cout<<"***Enter Student Information***"<<endl;
        }
        break;

        case 7:

             cout << "Exiting program.\n";
            break;

        default:
             cout << "Invalid option. Try again.\n";
    }

} while (option != 7);



}




