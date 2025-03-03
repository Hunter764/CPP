#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007 // Define MOD

//brute force

int main(){
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    int res = 1;
    for(int i=0; i<b; i++){
        res*=a;
    }

    cout<<"value of a to the power b is: "<<res<<endl;
}


//Binary exponentiation -Recursive approach

ll pow(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll ans = pow(a,b/2);
    ans *= ans;
    if(b&1){        //checking if exponent is odd
        ans *=a;
    }
    return ans;
}



//Binary Exponentiation using mod

ll pow(ll a, ll b){
    if(b==0){
        return 1;
    }

    ll ans = pow(a,b/2);
    ans = (ans*ans)%MOD; // to prevent oveflow
    if(b&1){
        ans *=a;
        ans %= MOD;
    }
    return ans;
}




// Binary exponentiation iterative approach

ll pow( ll a, ll b){
    ll  result = 1;
    while(b>0){
        if(b&1){
            result = result * a;
        }
        a = a*a;
        b>>=1;  //Right shift is equivalent to dividing b by 2 (b = b / 2).
    }
    return result;
}




int main(){
    ll a,b;
    cout<<"Enter the base and exponent: ";
    cin>>a>>b;
    cout<<pow(a,b)<<endl;
    return 0;
}

