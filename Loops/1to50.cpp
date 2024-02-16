//printtin all the values from 1 to 50 but not multiples of 3
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}