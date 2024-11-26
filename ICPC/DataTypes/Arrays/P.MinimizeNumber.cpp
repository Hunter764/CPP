#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    while(true){
        bool alleven = true;
        for(int i=0; i<n;i++){
            if(arr[i]%2!=0){
                alleven = false;
                break;
            }
        }
        if(!alleven){
            break;
        }
        for(int i=0; i<n;i++){
            arr[i] = arr[i]/2;
        }
        count++;
    }   
    cout<<count<<endl;
    return 0;

}    