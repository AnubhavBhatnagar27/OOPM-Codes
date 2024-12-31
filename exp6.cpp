// Implement a C++ program to demonstrate aggregation and association by creating a Car class that contains objects of Engine and Tire classes.
#include<bits/stdc++.h>
using namespace std;
class Engine{
    private:
    string enginetype;
    int hp;
    public:
    Engine(string type,int power){
        enginetype=type;
        hp=power;
    }
    void displayEngineinfo(){
        cout<<"Enging Type: "<<enginetype<<endl;
        cout<<"HorsePower: "<<hp<<endl;
    }
};
class Tire{
    private:
    string tiretype;
    int size;
    public:
    Tire(string type,int s){
        tiretype=type;
        size=s;
    }
    void displayTireinfo(){
        cout<<"Tire Type: "<<tiretype<<endl;
        cout<<"Tire Size: "<<size<<endl;
    }
};
class Car{
    private:
    string model;
    Engine engine;
    Tire tire;
    public:
    Car(string m,Engine e,Tire t):engine(e),tire(t){
        model=m;
    }
    void displayCarinfo(){
        cout<<"Car Model: "<<model<<endl;
        engine.displayEngineinfo();
        tire.displayTireinfo();
    }
};
int main(){
    Engine engine("2.2L",500);
    Tire tire("All Terrain",19);
    Car car("Mahindra Thar ROXX",engine,tire);
    cout<<"Car Information: "<<endl;
    car.displayCarinfo();
    return 0;
}