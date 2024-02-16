/*  1
   121    //printing the following pattern
  12321
  1234321
*/
//rows 1 to n
//columns 1 to (n-i)
//num increasing 1 to i
//num decreasing (i-1) to 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}