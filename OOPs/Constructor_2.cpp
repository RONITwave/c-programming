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

    student s3 = s1;                    // deep copy
    
    // jo bhichange krne hain wo S3 me kroge to s1 pr koi effect nhi padega , S3 ki value s1 se diff kr skte hain||


    student s4(s2);                     // copy constructor 

 // ye bhi deep copy hi hai , s4 ki value change krne se s2 pr koi effect nhi padega ||


     cout<<"name is : "<<s1.name<<"\nyour age is : "<<s1.age<<"\nyour gpa is : "<<s1.gpa<<"\n"<<endl;
    printf("\n");
    cout<<"name is : "<<s2.name<<"\nyour age is : "<<s2.age<<"\nyour gpa is : "<<s1.gpa<<"\n"<<endl;
    cout<<"name is : "<<s3.name<<"\nyour age is : "<<s3.age<<"\nyour gpa is : "<<s3.gpa<<"\n"<<endl;
    printf("\n");
    cout<<"name is : "<<s4.name<<"\nyour age is : "<<s4.age<<"\nyour gpa is : "<<s4.gpa<<"\n"<<endl;
    printf("\n");
}