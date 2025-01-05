#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n = s.length();
        int m = t.length();

        string result ="";
        int i=0, j=0;

        while(i<n && j<m){
            result +=s[i++];
            result +=t[j++];
        }
        //appending remaining char of s,if any
        while(i<n){
            result +=s[i++];
        }
        //appending remaining char of t,if any
        while(j<m){
            result +=t[j++];
        }
        cout<<result<<endl;
    }
    return  0;
}