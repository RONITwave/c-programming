#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    float gpa;

    student(){    // default constructor

    }

    student(string n, int a, float g){  // parameterized constructor
        name = n;
        age = a;
        gpa = g;
    }
};
int main(){
    student s1("joro",19,7.2);

    student s2;
    s2.name = "luffy";
    s2.age = 20;
    s2.gpa = 6.9;
    cout<<"name is : "<<s1.name<<"\nyour age is : "<<s1.age<<"\nyour gpa is : "<<s1.gpa<<"\n"<<endl;
    printf("\n");
    cout<<"name is : "<<s2.name<<"\nyour age is : "<<s2.age<<"\nyour gpa is : "<<s1.gpa<<"\n"<<endl;
}