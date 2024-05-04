#include<iostream>

using namespace std;

const int MAX_COLOR = 1001;

int main(){
    int n;
    cin>>n;

    int home[MAX_COLOR] ={0};
    int guest[MAX_COLOR]={0};

    for(int i=0;i<n;i++){
        int h,a;
        cin>>h>>a;
        home[h]++;
        guest[a]++;
    }

    int count =0;
    for(int i=1;i<MAX_COLOR;++i){
        count += home[i]*guest[i];
    }

    cout<<count<<endl;
}