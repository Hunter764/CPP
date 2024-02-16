#include<iostream>      
using namespace std;     //rows 1 to n
int main(){             //columns 1 to (n-rowsno. +1)
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){  //columns 1 to n-i+1
            cout<<"*";
        }
        cout<<endl;
    }
}               
