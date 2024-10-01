#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
   int a,b,c;
   cin>>a>>b>>c;
  
    int mini = min({a,b,c});
    int maxi = max({a,b,c});

    cout<<mini <<" "<< maxi << endl;
    return 0;
   
}