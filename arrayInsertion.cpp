#include <iostream>
using namespace std;

int main(){
    int i, j , n , arr[20],pos,element;
    cout<<"Program by Kanishka\n";
    cout<<"Enter number of element in an array";
    cin>>n;
    cout<<"Enter elements:";
    for(i = 1; i <= n; i++){
        cin>>arr[i];
    }
    cout<<"your array :"<<endl;
    for(i = 1; i <= n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Enter position to insert";
    cin>>pos;
    cout<<"Enter element to insert";
    cin>>element;
    for(j = n; j >= pos; j--){
        arr[j + 1] = arr[j];
    }
    arr[pos] = element;
    n = n+1;
    cout<<"after insaet";
    for(i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}