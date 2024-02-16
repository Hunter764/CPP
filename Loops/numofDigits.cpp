//counting number of digits in a given integer
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<"Number of digits:"<<digits<<endl;
  return 0;  

}