//linear search
/* search if a given element is present in the array or not , if it i s not present
then return -1 else return the index*/
#include<iostream>
using namespace std;
int main(){
    int array[]={3,9,18,11,7};
    int key=5;
    int ans=-1;
    for(int i=0;i<5;i++){
        if (array[i]==key){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}