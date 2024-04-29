/* Given a sentence 'str',return the word that is
occuring most number of times in that sentence*/

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str = " maths raghav is a maths teacher . He  is a DSA mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);

    }
    // //vector print
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    cout<<endl;
    sort(v.begin(),v.end());
    // //vector print
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;   //sorted order mai vector print ho jayega
    // }
    int maxCount = 1;
    int count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxCount =  max(maxCount,count);
    }

    count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;        }
    }

}