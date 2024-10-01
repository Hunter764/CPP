#include<bits/stdc++.h>
using namespace std;


/*
Floor: Is a mathematical function that takes a real number 𝑋
 and its output is the greatest integer less than or equal to 𝑋.

Ceil: Is a mathematical function that takes a real number 𝑋
 and its output is the smallest integer larger than or equal to 𝑋.


Round: Is a mathematical function that takes a real number 𝑋
 and its output is the closest integer to that number 𝑋.

*/

int main(){
   int x,y;
   cin>>x>>y;
   double z = (double)x/y; //Type casting R->L associativity
   cout<<"floor "<< x << " / " << y << " = "<<floor(z)<<endl;;
   cout<<"ceil "<< x << " / " << y << " = "<<ceil(z)<<endl;
   cout<<"round "<< x << " / " << y << " = "<<round(z)<<endl;

   return 0;
   
}
