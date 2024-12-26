//print smallest lexi string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    string y;
    cin>>x;
    cin>>y;
    
    if(x<y){
        cout<<x;
    }
    else{
        cout<<y;
    }
    return 0;
}

// the < operator cmpare strings lexicographically