#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minIndex =0;
    int maxindex = 0;
    for(int i=0; i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
        if(arr[i]>arr[maxindex]){
            maxindex = i;
        }        
    }
    swap(arr[minIndex],arr[maxindex]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    
    return 0;
}