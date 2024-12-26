#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int sum =0;
    for(int i=0;i<s.length();i++){
        int num = s[i] - '0';
        sum+=num;
    }
    cout<<sum<<endl;
    return 0;

}