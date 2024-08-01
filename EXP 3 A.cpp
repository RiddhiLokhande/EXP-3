//RIDDHI LOKAHNDE
//ENTC B2
//23070123107
//EXP 3 A
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;
    int sum,sub,multiplication,modulus,increment,decrement;
    int c = 10;
    sum=a+b;
    sub=a-b;
    multiplication=a*b;
    modulus=a%b;
    increment= ++a;
    decrement= --a;
    cout << "\nArithmetic Operators:" << endl;
    cout << "a + b = " << sum << endl;
    cout << "a - b = " << sub << endl;
    cout << "a * b = " << multiplication << endl;
    cout << "a % b = " << modulus<< endl;
    cout << "++a = " << increment<< endl;
    cout << "--a = " << decrement<< endl;
    
   
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
    
    cout << "\nComparison  Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (a<5 && a<10) << endl;
    cout << "x || y: " << (a<5 || a<11) << endl;
    cout << "!x: " << !(a<5 && a<10) << endl;
    
    return 0;
}
