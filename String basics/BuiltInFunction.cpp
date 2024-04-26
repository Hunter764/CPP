#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Abhyudaya at Microsoft";
    // cout<<str.length();  //null cahracter count nhi karega 
    // // indexes 0 to str.length()-1
    // int len = str.length();

    // string str = "abcd";
    // cout<<str<<endl;  // abcd
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // // str.push_back('def');  //error only a character can be given in input
    // cout<<str<<endl; //abcdefg

    // string s = "Abhyudaya";
    // cout<<s<<endl;
    // s.pop_back();  //last character ko delete kr dega
    // s.pop_back();
    // cout<<s<<endl;  //Abhyuda

    // string s = "abc";
    // cout<<s<<endl;
    // //string t ="def";
    // s = s + "def"; //+ operator ka kaam append krna hota h
    // cout<<s<<endl; //you cannot append a number in a string
    
    //string ke aage ya peeche aap character ko kahi bhi append kr skte hai
    // s = "xyz" + s

    string s = "abcdef"; //0 1 2 3 4
    cout<<s<<endl;  //abcdef
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;  //fedcba
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl; //abedcf
    
 
}