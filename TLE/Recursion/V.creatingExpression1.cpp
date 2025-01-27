#include<bits/stdc++.h>
using namespace std;

bool helper(int idx, int value, int arr[], int x,int n){
    if(idx == n){
        return value == x;
    }
    bool ans1 = helper(idx +1,value - arr[idx], arr,x,n);
    bool ans2 = helper(idx +1,value + arr[idx], arr,x,n);
    return ans1 || ans2;

}

int main(){
    int n, x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(helper(1,arr[0], arr, x , n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}