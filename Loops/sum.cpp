#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int i=0; //loop variable
    while(i<=n){  //condition
      sum+=i;
      i++;
    }
    cout<<sum<<endl;
}