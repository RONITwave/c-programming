#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    cricketer(string name, int runs){
        this->name = name;
        this->runs = runs; 
    }
};
int main(){ 
    cricketer c1("Virat",25000);
    cricketer c2("Rohit sharma",16000);

    cout<<"Name of the player is : "<<c1.name<<"\nAnd the score is : " <<" "<<c1.runs<<endl;
    cout<<"\nName of the player is : "<<c2.name<<"\nAnd the score is : "<<" "<<c2.runs<<endl;
}