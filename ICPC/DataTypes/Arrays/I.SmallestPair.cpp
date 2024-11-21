//Smallest Pairs
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        int i,j;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }

        int result = INT_MAX;
        for(int i=0; i<n ;i++){
            for(int j= i+1; j<n ;j++){
                int value = arr[i] + arr[j] +j-i;
                result = min(result,value);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
//TC : O(n^2)