#include<iostream>
using namespace std;
int main(){
    int value=2;
    switch(value){
        case 1:
        case 2:
        case 3:
          cout<<"Still alive"<<endl;
          break;
        default:
          cout<<"Not alive"<<endl;
        return 0;   
    }
}