#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    
    reverse(t.begin(),t.begin() + t.size());

    if(s==t){ 
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
    }
