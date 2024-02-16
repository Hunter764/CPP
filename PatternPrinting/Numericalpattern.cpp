//Numerical rectangular pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value n:";
    cin>>n;
    for(int i=1;i<=n;i++){            //rows 1 to n
        for(int j=i;j<=n;j++){       //columns i to n
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){ //1 to (i-1)
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}  


/*1234567
  2345671
  3456712
  4567123
  5671234
  6712345
  7123456*/
