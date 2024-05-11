#include<iostream>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;    

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
       this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }

};
Player getMaxScorePlayer(Player a ,Player b){
    if(a.getScore() > b.getScore())
        return a;
    else
        return b;    
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Player harsh; //object creation , statically.
    Player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(10);
    raghav.setIsAlive(true);
    raghav.setHealth(100);


    Player sanket = getMaxScorePlayer(harsh , raghav);

}