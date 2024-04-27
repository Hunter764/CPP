/*Return the total number of digits in a number
without using any loop.*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    string s = to_string(n);
    cout<<s.length()<<endl;

}