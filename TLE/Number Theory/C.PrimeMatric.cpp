#include<bits/stdc++.h>
using namespace std;


//constants

vector<int > primes;
vector<bool> is_prime;


void sieve(int n)
{
    is_prime.assign(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(is_prime[i]){
            for(int j = 2*i; j <= n; j+=i){
                is_prime[j] = false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
}


//TC : O(nloglogn)

int main(){
    sieve(100100);

    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }    
    }

    //taking input

    int answer = INT_MAX;

    //for rows

    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<m; j++){
            int nearestPrime = (*lower_bound(primes.begin(), primes.end(),a[i][j]));
            count += nearestPrime - a[i][j]; //required value to become prime

        }

        answer = min(answer,count);
    }

    //for columns

    for(int i=0; i<m; i++){
        int count =0;
        for(int j=0; j<n; j++){
            int nearestPrime = (*lower_bound(primes.begin(), primes.end(),a[j][i]));
            count += nearestPrime - a[j][i]; //required value to become prime
        }
        answer = min(answer,count);
    }

    cout<<answer<<endl;
    return 0;
}