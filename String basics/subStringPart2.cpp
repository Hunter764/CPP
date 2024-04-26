/*Input a string of even length and return
 the secondd half of that string using inbuilt substr function*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;

    int n =str.length();
    cout<<str.substr(n/2);

}