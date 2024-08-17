#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x;
        cin>>n >> x;
        if(n<=2){
            return 1;
        }
        else{
            int y = (n-3)/x + 2;
            cout<<y<<endl;
        }
    }
    return 0;
}