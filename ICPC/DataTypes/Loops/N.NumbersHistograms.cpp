#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0 ;i<n;i++){
        string result;
        for(int j=0 ;j<arr[i];j++){
            result += s;
        }
        cout<<result<<endl;
    }
    return 0;
}