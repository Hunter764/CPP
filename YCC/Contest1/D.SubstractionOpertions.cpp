// #298392136 codeforces 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        bool found = false;
        int left = 0 , right = 1;
        while(right <arr.size()){
            int diff = arr[right] - arr[left];
            if(diff == k){
                cout<<"YES"<<endl;
                found = true;
                break;

            }
            else if(diff< k){
                right++;
            }
            else{
                left++;
            }
            if(left == right){ //ensuring that pointer dont overlap
                right++;
            }

        }
        if(!found){
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}