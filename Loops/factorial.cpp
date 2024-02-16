//factorial of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<factorial<<endl;
    return 0;
}