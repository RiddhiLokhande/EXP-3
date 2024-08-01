# EXP-3
## Aim

- To implement and study operators in C++ language


## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
In C++, operators are symbols that specify the operations to be performed on operands. C++ provides a rich set of operators to perform various types of operations. These operators can be categorized into several groups:

##### Arithmetic Operators

These operators perform mathematical operations.
Perform various arithmetic operations and use assignment operators to update variable values.

##### Arithmetic Operators
These operators perform mathematical operations.

1.  (+) Addition
2.  (-) Subtraction
3.  (*) Multiplication
4.  (/) Division
5.  (%) Modulus
   
##### Relational Operators

These operators compare two values and return a boolean result.

1.  (==) Equal to
2.  (!=) Not equal to
3.  (>) Greater than
4.  (<) Less than
5.  (>=) Greater than or equal to
6.  (<=) Less than or equal to

##### Logical Operators

These operators are used to perform logical operations and return a boolean result.

1.  (&&) Logical AND
2.  (||) Logical OR
3.  (!) Logical NOT

##### Bitwise Operators

These operators perform bit-level operations on integer types.
Implement a program that demonstrates the use of bitwise operators, such as setting, clearing, and toggling bits.

1.  (&) Bitwise AND
2.  (|) Bitwise OR
3.  (^) Bitwise XOR
4.  (~) Bitwise NOT
5.  (<<) Left shift
6.  (>>) Right shift

##### Assignment Operators

These operators assign values to variables.

1.  (=) Assignment
2.  (+=) Add and assign
3.  (-=) Subtract and assign
4.  (*=) Multiply and assign
5.  (/=) Divide and assign
6.  (%=) Modulus and assign
7.  (&=) Bitwise AND and assign
8.  (|=) Bitwise OR and assign
9.  (^=) Bitwise XOR and assign
10. (<<=) Left shift and assign
11. (>>=) Right shift and assign

##### Increment and Decrement Operators

These operators increase or decrease the value of a variable by one.

1.  (++) Increment
2.  (--) Decrement

## Code 1 SIZE OF DATATYPES 
```cpp
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
```
### Output
![image](https://github.com/user-attachments/assets/dbe6d4e2-d055-4499-b8c0-f1606818cfef)

## CODE 2 SIZE OF DATA TYPES USING VARIABLES
```cpp

//RIDDHI LOKAHNDE
//ENTC B2
//23070123107
//EXP 3 B
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;
    
    cout << "\nBitwise Operators:" << endl;
    cout << "AND (a & b): " << (a & b) << endl;
    cout << "OR (a | b): " << (a | b) << endl;
    cout << "XOR (a ^ b):" << (a ^ b) << endl;
    cout << "NOT (~a) : " << (~a) << endl;
    cout << "LEFT SHIFT (a << 1):" << (a << 1) << endl;
    cout << "RIGHT SHIFT (a >> 1) : " << (a >> 1) << endl;
    return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/3f8d5ab2-403b-48e4-98f6-208c5adf140b)

## Conclusion
We learnt the implementation and study of operators in C++ language.
