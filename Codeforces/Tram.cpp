#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int maxPsg=0;
    int currentPsg=0;

    for(int i=0;i<n;i++){
        int exiting, entering;
        cin>>exiting >> entering ;

        currentPsg -= exiting;
        currentPsg += entering;
        if(currentPsg > maxPsg){
        maxPsg  = currentPsg;
       
    }
    }
    cout<< maxPsg <<endl;
    

    return 0;
}