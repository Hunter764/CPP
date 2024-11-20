#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int start =0, end= n-1;
    bool isymmetric = true;
    while(start<end){
        if(arr[start] != arr[end]){
            isymmetric =false;
            break;
        }
        start++;
        end--;
    }
    if(isymmetric){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}