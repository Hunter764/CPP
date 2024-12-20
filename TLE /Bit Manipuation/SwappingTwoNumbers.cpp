//Swap two numbers without using a temporary variable and swap function


#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int b =10;

    cout<<"Before swapping: "<<a<<" "<<b<<endl;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"After swapping: "<<a<<" "<<b<<endl;
    return 0;
}

// Before swapping: 5 10
// After swapping: 10 5