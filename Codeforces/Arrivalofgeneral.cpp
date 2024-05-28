#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    //positon of the soldier
    int maxS =0 , minS =0;
    for(int i=1; i<n; i++){
        if(s[i] > s[maxS]){
            maxS = i;
        }
        if(s[i] <= s[minS]){
            minS = i;
        }
    }
    int moves = maxS + (n-1-minS);
    if(maxS > minS){
        moves -=1;
    }
    cout<< moves <<endl;
}