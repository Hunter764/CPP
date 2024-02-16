#include<iostream>
using namespace std;
int p=5;
int main(){
    int p=7;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    cout<<::p;  // gloabal inside local variable
}
