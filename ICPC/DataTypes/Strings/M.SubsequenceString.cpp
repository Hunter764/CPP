/*
A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al",
*/


#include<bits/stdc++.h>
using namespace std;

//using two pointers
bool isubsequence(string subseq,string s){
    int i=0, j=0;
    while(i<subseq.length() && j<s.length()){
        if(subseq[i]==s[j]){
            i++;
        }
        j++;
    }
    return i == subseq.length();
}

int main(){
    string s;
    cin >> s;

    string subseq = "hello";
    if(isubsequence(subseq,s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}