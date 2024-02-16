#include<iostream>
using namespace std;
void makeTwice(int p){
    p=p*2;//48
}
int main(){
    int p=24;
    makeTwice(p);
    cout<<p;//24
}
//both p's are different