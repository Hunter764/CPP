#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;

    string stones;
    cin>>stones;

    int removals=0;
    
    for(int i=0;i<n;i++){
        if(stones[i] == stones[i -1]){
            removals++;
        }
    }
    cout<<removals<<endl;
    return 0;
}