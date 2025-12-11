#include <iostream>
using namespace std;

int main(){
    int i, j , n , arr[20],pos,item;
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
    cout<<"Enter position to delete item";
    cin>>pos;
    item = arr[pos];
    for(j = pos; j < n; j++){
        arr[j] = arr[j + 1];
    }
    n = n-1;
    cout<<"After deletion";
    for(i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}