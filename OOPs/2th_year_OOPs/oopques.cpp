
#include <iostream>
using namespace std;

//          AI's writen 
// 1. Forward Declaration imp
// Compiler ko batana padta hai ki 'B' naam ki class aage aane wali hai.
class B;

class A {
private:
    int x;
public:
    A() { x = 10; }
    
    // Friend declaration mein dono classes ka zikar hai
    friend void add(A, B); 
};

class B {
private:
    int y;
public:
    B() { y = 20; }

    // Same friend function yahan bhi declare karna padega
    friend void add(A, B);
};

// Common Friend Function Definition
void add(A obj1, B obj2) {
    // Ye function A ke private 'x' aur B ke private 'y' dono ko access kar sakta hai
    cout << "Sum of A and B: " << obj1.x + obj2.y << endl;
}

int main() {
    A obj1;
    B obj2;
    add(obj1, obj2); // Output: 30
    return 0;
}