//A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(rev == s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}