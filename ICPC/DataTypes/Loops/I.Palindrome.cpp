#include<bits/stdc++.h>
using namespace std;

int  reverseNumber(int n){
    int reversed = 0;
    while(n>0){
        int lastDigit = n%10;
        reversed = reversed*10 + lastDigit;
        n/=10; 
    }
    cout<<reversed<<endl;
    return reversed;
}

int main(){
    int n;
    cin>>n;
    int temp = reverseNumber(n);
    if(n == temp){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}