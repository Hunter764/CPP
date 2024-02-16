//the first multiple of 5 which is also multiple of 7
#include<iostream>
using namespace std;
int main(){

    //for(int i=0;i<=5;i++){
      //  if(i%7==0){
     //    cout<<i<<endl;
     // }
    int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;

    }
    return 0;
    
}