#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1000002;

bool sieve[N];

int main(){
    
    memset(sieve,0,sizeof(sieve));
    //sieve[i] =0 -> prime 

    sieve[0] = sieve[1] = 1;
    for(int i=2; i*i<N ;i++){
        if(!sieve[i]){
            for(int j=2*i; j<N; j+=i){
                sieve[j] = 1;   //setting there multiple to non-prime
            }
        }
    }

    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0 ;i<n;i++) cin>>arr[i];

    for(int i=0; i<n; i++){
        if(arr[i] <=3 ){   // divisors of 1->1,  2->1,2  , 3->1,3   , They are not T prime
            cout<<"NO"<<endl;
            continue;
        }
        ll temp = sqrt(arr[i]);
        //check # is perfect square or not 
        if(temp*temp ==arr[i] && !sieve[temp]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}