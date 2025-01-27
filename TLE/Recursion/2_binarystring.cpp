//generate binary string of number n;

#include<bits/stdc++.h>
using namespace std;

string binary_representation(int n){
  if(n<2){
    return to_string(n);
  }
  string ans = binary_representation(n/2);
  if(n%2 !=0){ans += '1';}
  else{ans += '0';}
  return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    string s = binary_representation(n);
    cout<<s<<endl;
    return 0;
}


// Enter the number: 5
// 101