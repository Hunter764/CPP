/*
1. Primitive datatypes like int/long/double/float.string when passed as parameter in functio, In each function call , they will have individual copy.

2.Arrays/List/hashmap/Objects when passed as parameter in function call will share same copy.


*/


#include<bits/stdc++.h>
using namespace std;

void modifyvec(vector <int> &v){   //pass by reference 
    v.push_back(100); //Modifies the original vector
}

int main(){
    vector<int> v ={1,2,3};
    modifyvec(v);
    for(int i : v){
        cout<<i<<endl;   //1 2 3 100
    }
    return 0;

}