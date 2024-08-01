#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    // Arithmetic operators
    int a = 10, b = 3;
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    // Relational operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    
    // Logical operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    // Bitwise operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a << 1: " << (a << 1) << endl;
    cout << "a >> 1: " << (a >> 1) << endl;

    // Assignment operators
    int c = 10;
    cout << "\nAssignment Operators:" << endl;
    cout << "c = " << c << endl;
    c += 5;
    cout << "c += 5: " << c << endl;
    c -= 3;
    cout << "c -= 3: " << c << endl;
    c *= 2;
    cout << "c *= 2: " << c << endl;
    c /= 2;
    cout << "c /= 2: " << c << endl;
    c %= 3;
    cout << "c %= 3: " << c << endl;
    c &= 2;
    cout << "c &= 2: " << c << endl;
    c |= 1;
    cout << "c |= 1: " << c << endl;
    c ^= 3;
    cout << "c ^= 3: " << c << endl;
    c <<= 1;
    cout << "c <<= 1: " << c << endl;
    c >>= 1;
    cout << "c >>= 1: " << c << endl;

    return 0;
}
