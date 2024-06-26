#include <iostream>
using namespace std;
 
 
void Goals(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a<b)==(c<d)) cout<<"YES\n";
    else cout<<"NO\n";
    
}
 
int main() {
    int t=1;
    cin>>t;
    while(t--){
        Goals();
    }
    return 0;
}