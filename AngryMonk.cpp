#include<iostream>
using namespace std;


void answer(){
    long long n ,m , k;
    cin >> n >> m >> k;
    
    for(int i=n; i>m; i--){
        cout << i << " ";
    }
    for(int i=1; i<=m; i++){
        cout << i << " ";
    }
    cout << endl;    
}

int main(){
    int t; cin >> t;
    while(t--){
        answer();
    }
        
}