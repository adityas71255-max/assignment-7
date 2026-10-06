#include <iostream>
using namespace std;

class B;

class A {
private:
    int number;

public:
    A(int n) {
        number = n;
    }
    friend void compare(A, B);
};

class B {
private:
    int number;

public:
    B(int n) {
        number = n;
    }
    friend void compare(A, B);
};

void compare(A a, B b) {
    if (a.number > b.number) {
        cout << "A has the greater number" << endl;
    } else if (b.number > a.number) {
        cout << "B has the greater number" << endl;
    } else {
        cout << "Both numbers are equal" << endl;
    }
}

int main() {
    int x, y;
    cout << "Enter numbers for A and B: ";
    cin >> x >> y;

    A a(x);
    B b(y);
    compare(a, b);
    return 0;
}
