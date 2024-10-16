#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int first = 1;
    for(int i=1; i<=n; i++){
        cout<<first<<" "<<first+1<<" "<<first+2<<" "<<"PUM"<<endl;
        first+=4;
    }
    return 0;
}