#include <iostream>
using namespace std;

class A {
private:
    int number;

public:
    A() {
        number = 10;
    }
    friend class B;
};

class B {
public:
    void display(A a) {
        cout << "Private number in A: " << a.number << endl;
    }
};

int main() {
    A a;
    B b;
    b.display(a);
    return 0;
}
