#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    while(x >=10){
        x/=10;
    }
    if(x%2==0) cout<<"EVEN"<<endl;
    else cout<<"ODD"<<endl;
    return 0;
}