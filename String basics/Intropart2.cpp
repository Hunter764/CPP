#include<iostream>
using namespace std;
int main(){
    // char str[] = {'a','b','c','d','e','f'};
    // cout<<str<<endl;   //output:- abcdef

    char str[] = {'a','b','\0','c','d','e','f'};
    cout<<str<<endl;   //output:- ab
}