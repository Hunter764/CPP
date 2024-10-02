#include<bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin>>x;
    if((int)x>=97){
        x = char(int(x)-32);
        cout<<x<<endl;
    }
    else{
        x = char((int)x + 32);
        cout<<x<<endl;
    }
    return 0;
}