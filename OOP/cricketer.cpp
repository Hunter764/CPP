/* create a class "cricketer" that contains name of cricketer, his age,
number of test matches that he has played and the average  runs tha he has scored in each 
test match.Create an array of data type "cricketer" to hold records of 20 such cricketers
and then write a program to read these records
*/
#include<iostream>
using namespace std;
class Cricketer{
public:
    char name;
    int age;
    int noOfTestMatches;
    int avg;

};

int main(){

    Cricketer virat;
    virat.name = 'V';
    virat.age = 30;
    virat.noOfTestMatches = 100;
    virat.avg = 90;

    Cricketer dhoni;
    dhoni.name = 'D';
    dhoni.age = 40;
    dhoni.noOfTestMatches = 200;
    dhoni.avg = 56;

    Cricketer cricketers[2] ={virat , dhoni};
    for(int i=0;i<2;i++){
    cout<<cricketers[i].name<<endl;
    cout<<cricketers[i].age<<endl;
    cout<<cricketers[i].noOfTestMatches<<endl;
    cout<<cricketers[i].avg<<endl;

    }
}