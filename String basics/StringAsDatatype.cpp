#include<iostream>
using namespace std;
int main(){
    // string str = "Abhyudaya";
    // cout<<str;  //output:- Abhyudaya

    string s;
    //cin>>s;  //it only works if the given string has no space
    
    getline(cin,s);  //VV imp
    cout<<s;
    
    //we use "getline" function to overcome spaces
}