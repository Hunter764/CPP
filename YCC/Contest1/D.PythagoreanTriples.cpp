// #298399922 codeforces  can also be solved using binary search

#include<bits/stdc++.h>
using namespace std;

int my_sqrt(int x){
    int a = (int)sqrt(x);
    return a;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_a = my_sqrt(2*n-1);
        if(max_a<3){
            cout<<'0'<<endl;
        }
        else{
            cout<<(max_a - 1)/2<<endl; //calling out odd numbers
        }
    }
    return 0;
}