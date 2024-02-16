#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;

    if(num%2==0 && num%3==0){
        cout<<"Number is even and divisible 3"<<endl;
    }
}