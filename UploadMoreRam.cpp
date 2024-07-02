#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int minimum_sec_required = (n-1)*k + 1;
        cout<<minimum_sec_required<<endl;
    }
    return 0;
}