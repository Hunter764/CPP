#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    //s.substr(idx) //index aur uske aage wale characters return kr dega
    // cout<<s.substr(4); //ef

    //s.substr(idx,length)
    cout<<s.substr(2,3); //cde

}
