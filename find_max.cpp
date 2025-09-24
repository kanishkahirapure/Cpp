#include <iostream>
using namespace std;
 
void findLargestElement(int data[] , int n){
    if(n <= 0){
        cout<< "Array is empty.Cannot find largest element"<<endl;
        return;
    }

    int k , loc = 1;
    int max = data[1]; 

    for (k = 1; k < n; k++){
        if (data[k] > max){
            max = data[k];
            loc = k;
        }
    }

    cout <<"The largest element is :"<< max << endl;
    cout <<"Its location (index) is :"<< loc << endl;  
}

int main(){    

    int n, i;
    cout<<"Enter size of array:";
    cin>>n;

    int data[50];
    cout << "Enter" << n << "elements:";
    for (i = 0; i < n; i++){
        cin >> data[i];
    }

    findLargestElement(data,n);

    return 0;
}