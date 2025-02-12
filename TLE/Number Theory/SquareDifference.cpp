#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    if((a-b)!=1){
        cout<<"NO"<<endl;
        return;
    }
    ll num = a+b;

    //check if num is prime or not

    int cnt= 0;
    for(int i=2; i*i<=num; i++){
        if(num%i == 0){
            cnt++;
            while(num%i == 0){
                num/=i;
            }
        }
    }
    if(num>1){
        cnt++;
    }
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}