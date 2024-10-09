#include<bits/stdc++.h>
using namespace std;

int main(){
    int a ,b;
    cin>>a>>b;

    vector<int>divisors;

    vector<int>factors;
    for(int i=1 ;i<=a ;i++){
        if(a%i==0){
            divisors.push_back(i);
        }
    }
    for(int i=1 ;i<=b ;i++){
        if(b%i==0){
            factors.push_back(i);
        }
    }
    vector<int>common;
    set_intersection(divisors.begin(),divisors.end(),factors.begin(),factors.end(),back_inserter(common));
    int gcd = *max_element(common.begin(),common.end());  
    cout<<gcd<<endl;

    return 0;  

}