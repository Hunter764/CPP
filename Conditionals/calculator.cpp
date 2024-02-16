#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the numbers:";
    cin>>n1>>n2;

    cout<<"Enter the operator (+,-,*,/,%):";
    char op;
    cin>>op;
     
    switch(op){
        case '+':
          cout<<"Sum is:"<<n1+n2<<endl;
          break;
        case '-':
          cout<<"difference is:"<<n1+n2<<endl;
          break;
        case '*':
          cout<<"product is:"<<n1*n2<<endl;
          break;
        case '/':
          cout<<"division:"<<n1/n2<<endl;
          break;
        case '%':
          cout<<"remainder is:"<<n1%n2<<endl;
          break;
        default:
          cout<<"Enter a valid operator"<<endl;  

    } 

}