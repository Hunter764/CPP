#include<iostream>      
using namespace std;     //rows 1 to n
int main(){             //columns 1 to rows no.
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}               
