#include<iostream>
using namespace std;

int fact(int n){
    //base case
    if(n==0 || n==1) return 1;
    //recursive call;
    return n*fact(n-1);
}
int main(){
    cout<<fact(5);
}