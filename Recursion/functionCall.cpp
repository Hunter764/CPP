#include<iostream>
using namespace std;

void gun(){
    return; //khatam
    cout<<"Hello CW"<<endl;
}

void fun(){
    cout<<"Hello PW"<<endl;
    gun();
    return;
}
int main(){
    fun();
}