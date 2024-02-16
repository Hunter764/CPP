#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    int a=5;
    int b=4;
    int c=9;
    float d=3.4;
    float e=4.6;
    cout<<add(a,b,c)<<endl;   // cout<<add(a,b)<<endl;   cout<<add(d,e)<<endl;
    return 0;
}
