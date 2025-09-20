#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;

    cout <<"Enter how many times loop should run:";
    cin >> n;

    for(int i = 1; i <=n; i++){
        sum += i;
    }

    cout << sum << endl;
}