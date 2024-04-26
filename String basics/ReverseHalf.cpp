//Input a string of even length and reverse the first half of the string

#include<iostream>
#include<string>
using namespace std;
 int main(){ 
    // string s="Hunter";
    // cout<<s<<endl; //Hunter
    // reverse(s.begin(),s.begin()+3);
    // cout<<s<<endl;  //unHter

    string s;
    getline(cin,s);
    int len = s.length();
    reverse(s.begin(),s.begin()+len/2);
    cout<<s;


 }
