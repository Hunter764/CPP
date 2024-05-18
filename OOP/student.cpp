#include<iostream>
using namespace std;

class  student{
    string name;
    public:

    int age;
    bool gender;

    // student(){
    //     cout<<"Default constructor"<<endl;
    // }

    student(string s , int a, int g){  //constructor
        name =s;
        age = a;
        gender = g;
    } //parameterised constructor

    void setName(string s){  //setter function
        name = s;
    }
    void getName(){      //getter function
        cout<<name<<endl;
    }


    
    void printInfo(){
        cout<<"Name =";
        cout<<name<<endl;
        cout<<"Age =";
        cout<<age<<endl;
        cout<<"Gender =";
        cout<<gender<<endl;

    }

};

int main(){
    // student arr[3];
    // for(int i=0; i<3 ; i++){
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender ;
    // }
   
    // for(int i =0; i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Abhi",19,1);
    a.printInfo();
    


    return 0;
}