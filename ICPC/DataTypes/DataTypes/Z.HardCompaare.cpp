#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long double first = b*log(a);
    long double second = d*log(c);
    if(first > second){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}