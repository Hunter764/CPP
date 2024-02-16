#include<iostream>
using namespace  std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;                          
    for(int i=1;i<=n;i++){  //rows 1 to n
        for(int j=1;j<=(n-i);j++){ //column space wala part " " 1 to (n-rowno.)
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){ //column * print wala part 1 to (2i-1)
            cout<<"*";
        }
        cout<<endl;
    }
}