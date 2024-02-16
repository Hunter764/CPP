//Find the last occurence of an element x in a given array
//1 2 3 2 1 3 1
#include<iostream>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int occurence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    cout<<occurence<<endl;

     //end se traverse kr rahe hai
    // for(int i=v.size()-1;i>=0;i--){
    //     if(v[i]==x){
    //         occurence=i;
    //         break;
    //     }
    // }
    // cout<<occurence<<endl;
}