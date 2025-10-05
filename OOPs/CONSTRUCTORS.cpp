#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    float gpa;
    student(string n, int a, float g){
        name = n;
        age = a;
        gpa = g;
    }
};
int main(){
    student s1("joro",19,9.7);
    cout<<s1.name<<"\nyour age is : "<<s1.age<<"\nyour gpa is : "<<s1.gpa<<endl;
}