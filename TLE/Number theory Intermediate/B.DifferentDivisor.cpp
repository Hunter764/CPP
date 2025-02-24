#include<bits/stdc++.h>
using namespace std;

const int N=1e6;
bool sieve[N+1];

int main(){
    memset(sieve,true,sizeof(sieve));
    for(int i=2; i*i<=N; i++){
        if(sieve[i]){
            for(int j=2*i; j<=N; j+=i){
                sieve[j]=false;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int ans =1;
        int temp = d+1;

        //1st prime number q between 1st and last divisor
        for(int i=temp; i<=N;i++){
            if(sieve[i]){
                ans*=i;
                temp =i;
                break;
            }

        }

        //2nd prime number q between 1st and last divisor
        temp +=d;
        for(int i=temp; i<=N;i++){
            if(sieve[i]){
                ans*=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}