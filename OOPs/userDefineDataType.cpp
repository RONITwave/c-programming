#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    float gpa;
};
int main(){
    student s1;
    s1.name = "joro";
    s1.age = 19;
    s1.gpa = 9.9;

    student s2;
    s2.name = "luffy";
    s2.age = 20;
    s2.gpa = 6.9;
    cout<<s1.name<<"\n "<<s1.age<<endl;
    printf("\n");
    cout<<s2.name<<"\n "<<s2.age<<endl;
}