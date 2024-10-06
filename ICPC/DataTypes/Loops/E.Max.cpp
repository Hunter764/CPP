#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }
    int maxEle=arr[0];
    
    for(int i=0 ;i<n; i++){
        if(arr[i]>maxEle){
            maxEle = arr[i];
        }
    }
    cout<<maxEle<<endl;
    return 0;
}