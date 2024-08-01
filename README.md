# EXP-3
## Aim

- To implement and study operators in C++ language


## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
In C++, operators are symbols that specify the operations to be performed on operands. C++ provides a rich set of operators to perform various types of operations. These operators can be categorized into several groups:

Arithmetic Operators
These operators perform mathematical operations.

+ (Addition)
- (Subtraction)
* (Multiplication)
/ (Division)
% (Modulus)

-long: At least as large as an int.
-long long: Typically larger than a long.
Each of these types can be signed (default) or unsigned.
2. Character Types:
-char: Typically used to store characters.
-signed char: Ensures the char is signed.
-unsigned char: Ensures the char is unsigned.
-wchar_t: Used for wide characters.
3. Floating-Point Types:
-float: Single-precision floating point.
-double: Double-precision floating point.
-long double: Extended-precision floating point.
4. Boolean Type:
-bool: Represents true/false values.
#### STORAGE CLASSES-

1. ##### Auto:
Default storage class for local variables.
Automatically inferred, but largely redundant in modern C++ as the type is deduced.

2. ##### Register:
Suggests to the compiler to store the variable in a CPU register for faster access.
Modern compilers often ignore this hint and manage registers automatically.

3. ##### Static:
For local variables, retains the variable's value between function calls.
For global variables, restricts the visibility to the file in which it's declared.
For class members, shared among all instances of the class.

4. ##### Extern:
Declares a global variable or function that is defined in another file.
Used to access variables or functions across multiple files.

5. ##### Mutable:
Only applies to class member variables.
Allows modification of a member variable even if the containing object is const.
## Code 1 SIZE OF DATATYPES 
```cpp
//RIDDHI LOKHANDE
//ENTC B2
//EXP 2 A
//23070123107
#include <iostream>
using namespace std;
int main() {
    cout << "size of char: " << sizeof(char) << " byte" << endl;
    cout << "size of int: " << sizeof(int) << " byte" << endl;
    cout << "size of float: " << sizeof(float) << " byte" << endl;
    cout << "size of double: " << sizeof(double) << " byte" << endl;
    cout << "size of short int: " << sizeof(short int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of unsigned char: " << sizeof(unsigned char) << "byte" << endl;
    cout << "size of signed char: " << sizeof(signed char) << "byte" << endl;
    cout << "size of unsigned int: " << sizeof(unsigned int) << "byte" << endl;
    cout << "size of signed int: " << sizeof(signed int) << "byte" << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
    cout << "size of signed long int: " << sizeof(signed long int) << "byte" << endl;
    cout << "size of unsigned short int: " << sizeof(unsigned short int) << "byte" << endl;
    cout << "size of signed short int: " << sizeof(signed short int) << "byte" << endl;
    cout << "size of unsigned long long int: " << sizeof(unsigned long long int) << "byte" << endl;
    cout << "size of bool: " << sizeof(bool) << "byte" << endl;
    return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/2bdd76f0-1c20-4681-862a-4eaf58b8d6f5)

## CODE 2 SIZE OF DATA TYPES USING VARIABLES
```cpp

//RIDDHI LOKHANDE
//ENTC B2
//EXP 2 B
//23070123107
#include<iostream>
using namespace std;
int main() {
    int a;
    char b;
    signed char c;
    unsigned char d;
    float e;
    double f;
    long double g;
    bool h;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Size of int is:"<<sizeof(a)<<"\n";

    cout<<"Enter a character: ";
    cin>>b;
    cout<<"Size of char is:"<<sizeof(b)<<"\n";

    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Size of signed char is:"<<sizeof(c)<<"\n";

    cout<<"Enter a character: ";
    cin>>d;
    cout<<"Size of unsigned char is:"<<sizeof(d)<<"\n";

    cout<<"Enter a number: ";
    cin>>e;
    cout<<"Size of float is:"<<sizeof(e)<<"\n";
    

    cout<<"Enter a number: ";
    cin>>f;
    cout<<"Size of double is:"<<sizeof(f)<<"\n";

    cout<<"Enter a number: ";
    cin>>g;
    cout<<"Size of long double is:"<<sizeof(g)<<"\n";

    cout<<"Enter a bool value: "; 
    cin>>h;
    cout<<"Size of bool is:"<<sizeof(h)<<"\n";
return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/44c171ce-6911-4f0e-ac11-d84142c7e39e)

## CODE 3 STORAGE CLASSES
```cpp
//RIDDHI LOKHANDE
//ENTC B2
//23070123107
//EXP 2 C
#include <iostream> 
using namespace std;

#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number: ";                       
    cin>>a;
    cout<<"\nInteger= "<<a<<" and size is "<<sizeof(a)<<" bytes.";  

    register int b;
    cout<<"\nEnter a number: ";                                     
    cin>>b;
    cout<<"\nRegister= "<<b<<" and size is "<<sizeof(b)<<" bytes.";   

    static int d;
    cout<<"\nEnter any number: ";                                      
    cin>>d;
    cout<<"\nStatic= "<<d<<" and size is "<<sizeof(d)<<" bytes.";      

    return 0;
}
```
#### OUTPUT 
![image](https://github.com/user-attachments/assets/8613a136-dbf9-40ba-a50d-a48914322f67)

## Conclusion
This simple program demonstrates the basic structure and workflow of a C++ program, including the use of headers, the main function, standard output, and the return statement
