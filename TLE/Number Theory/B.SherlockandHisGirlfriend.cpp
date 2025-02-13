#include<bits/stdc++.h>
using namespace std;

int sieve[100005];

int main(){
    int n;
    cin >> n;

    memset(sieve, 0, sizeof(sieve)); //setting all elements to prime
    //sieve[i] =0 -> prime

    for(int i=2; i<=n+1; i++){
        if(!sieve[i]){  //not prime
            for(int j=2*i; j<=n+1; j+=i){
                sieve[j] = 1; //not prime
            }
        }
    }
    if(n>2){
        cout<<"2" <<endl;
    }
    else{
        cout<<"1"<<endl;
    }

    for(int i=2; i<=n+1; i++){
        if(!sieve[i]){  //number is prime
            cout<<"1 ";
        }

        else{
            cout<<"2 ";
        }
    }
    return 0;
}