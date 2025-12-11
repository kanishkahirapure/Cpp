#include <iostream>
using namespace std;

int main(){
    int i , n , arr[20],loc,item;
    int start , end, mid;
    cout<<"Program by Kanishka : \n";
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter elements in sorted order :";
    for(i = 1; i <= n; i++){
        cin>>arr[i];
    }
    cout<<"your array :"<<endl;
    for(i = 1; i <= n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Enter item to search";
    cin>>item;

    start = 1;
    end = n;
    mid = (start + end)/2;
    
    while(start <= end && arr[mid] != item){
        if(item < arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    if(arr[mid] == item){
        loc = mid;
    }else{
        loc = -1;
    }
    if(loc == 0){
        cout<<"Not found";
    }else{
        cout<<"Item found at location"<<loc;
    }
    return 0;
}