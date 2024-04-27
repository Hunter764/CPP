/*given two strings s and t,return if t is an anagram
of s and false otherwise*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "physicswallah";
    string t = "phywallahsics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;

}