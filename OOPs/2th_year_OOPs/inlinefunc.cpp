// Demonstrate the inline function 

#include<iostream>
using namespace std;
class my_class{
public:
    string name;
    int roll_no;
    void inline set_value(string n ,int r)
    {
        name = n;
        roll_no = r;
    }
    void show()
    {
        cout<<"Name: "<<name<<" "<<"Roll No: "<<roll_no<<endl;
    }
};
int main()
{
    my_class m;
    m.set_value("Rahul",45);
    m.show();
    return 0;
}