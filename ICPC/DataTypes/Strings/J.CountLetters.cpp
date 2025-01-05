#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    map<char,int> freq;
    for(char c: s){ //count freq of each char in string
        freq[c]++;
    }

    //result in asc order
    for(auto it: freq){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;

}