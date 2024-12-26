#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        if(s.find("101") != string::npos ||  s.find("010") != string::npos){
            cout<<"Bad"<<endl;
        }
        else{
            cout<<"Good"<<endl;
        }
    }
    return 0;
}