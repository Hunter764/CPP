#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==0){
            cout<<"0"<<endl;
        }
        else{
            vector<int> arr;
            while(n>0){
                arr.push_back(n%10);
                n/=10;
            }
            for(int i=0 ;i<arr.size(); i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}