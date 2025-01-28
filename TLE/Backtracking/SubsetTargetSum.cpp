/*
Given an positive array of integers and a value sum, the task is to check if there is a subset of the given array whose sum is equal to 
the given target_sum. The subset can contain elements from the array in any order.

ex:- arr[]={3,4,5} k=9
    output:- {3,4}
*/

#include<bits/stdc++.h>
using namespace std;

bool helper(int i , int sum ,int n, vector<int> &v , int target_sum){

    if(sum == target_sum){
        return true;
    }
    if(i == n){
        return false;
    }
    if(sum > target_sum){
        return false;
    }
    //Two choices 1. take 2.leave

    //1.take
    bool ans = helper(i+1, sum + v[i], n, v ,target_sum);
    if(ans == true){
        return true;
    }
    //2.leave
    ans = helper(i+1, sum, n, v ,target_sum);
    return ans;
}


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target_sum;
    cin>>target_sum;
    bool ans = helper(0,0,n,v,target_sum);
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


// 1
// 3 4 5
// 9 
// Yes