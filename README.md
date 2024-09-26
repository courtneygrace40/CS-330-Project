# C++ Project

Author: Courtney Sweeney

## Language Overview and Setup

### History
C++ is an **object-oriented programming language** that was created as an extension to the C language in 1979 by Bjarne Stroustrup at Bell Labs. The major difference is that C++ supports classes and objects while C does not. One of the strengths of C++ is the amount of control that is given to the programmer. Currently, C++ is the second most popular programming language in the world. 


Some of the uses of C++ include:  
- Video games
- Graphical applications and simulations
- Artificial Intelligence 
- Embedded software 
- Audio and video processing


For history, I used https://www.learncpp.com/cpp-tutorial/introduction-to-cplusplus/.  
To learn C++, I will be using:
  - https://www.w3schools.com/cpp/default.asp 
  - https://www.codecademy.com/
  - https://www.programiz.com/cpp-programming/


### Hello World Program
Type this code into your program:

```cpp
#include <iostream>  
using namespace std;  

int main() { 
cout << "Hello World!"; 
return 0; 
}
```
This will run "Hello, World!", the first program programmers run when learning a new language.  

## Syntax and Conventions 

### Variables

Here are the rules for naming variables in C++:
- Variables **MUST** begin with a letter or an underscore 
- Variables can contain letters, digits, and underscores
- Case-sensitive 
- Variables cannot contain whitespace or special characters

**Some more information about variables and objects in C++:**   
There are 98 reserved keywords in C++. This includes words like "bool", "break", "or", "public", and "if". Typically, programmers use **"CamelCase"**, which means that words are separated by capitals. For example, "myNum" would be CamelCase. When a variable is declared, the type must also be declared before the name. Objects in C++ are **mutable** by nature but can be converted to immutable by using "const". The "const" keyword is short for constant, meaning that the variable will become a constant, or in other words, **immutable**. 

**Variable Types**   
Here are the basic data types for variables in C++:
1. **Integer:** an integer value (whole number) is stored with this data type
```cpp
int myNum = 8;
```
2. **Float:** a decimal value is stored with this data type
```cpp
float myFloat = 6.59;
```
3. **Double:** similar to a float, a decimal is stored with this data type. Doubles allow for more digits of the decimal to be stored, so they are a larger data type than floats and integers. 
```cpp
double myDouble = 9.78;
```
4. **Character:** a single character is stored with this data type
```cpp
char myLetter = 'C';
```
5. **String:** text is stored with this data type 
```cpp
string myString = "Courtney";
```
6. **Boolean:** a Boolean (True or False) is stored with this data type
```cpp
bool myBoolean = true;
```
7. **Pointers:** returns the address of the variable it is "pointing" to 
```cpp
string* ptr = &myString;
```

**Operations with Different Types**  
There are many different operators used in C++. Some of these include:
1. **Arithmetic Operators**
- (+) (addition)
- (-) (subtraction)
- (*) (multiplication)
- (/) (division)
- (%) (modulo, which gets the remainder)
2. **Relational Operators**
- (==) (is equal to)
- (!=) (is not equal to)
- (>) (is greater than)
- (<) (is less than)
- (>=) (is greater than or equal to)
- (<=) (is less than or equal to)
3. **Logical Operators**
- exp 1 **&&** exp2 (Logical **AND**)
- exp1 **||** exp2 (Logical **OR**)
- **!** exp (Logical **NOT**)
4. **Bitwise Operators**
- & (Binary AND)
- | (Binary OR)
- ^ (Binary XOR)
- ~ (Binary One's Complement)
- (<<) (Binary Shift Left)
- (>>) (Binary Shift Right)
5. **Assignment Operators**
- = (assigns value to a variable)
- += (if a += b, a = a + b)
- -= (if a -= b, a = a - b)
- *= (if a *= b, a = a * b)
- /= (if a /= b, a = a / b)
- %= (if a %= b, a = a % b)
6. **Other Operators**
- sizeof (returns size of data type)
- ? (returns value based on condition)
- & (memory address, used with pointers)
- . (accesses members of class objects, etc)
- -> (used with pointers to access class or variables)
- (<<) (prints the output value)
- (>>) (gets the input value) 
- ++ (increases the value by 1)
- -- (decreases the value by 1) 

  
Here, the previously declared variables from above are used to perform different operations. 
```cpp
    int mySum = myNum + myDouble;
    float mySum2 = myNum + myDouble;

    int myProduct = myNum * myDouble;
    float myProduct2 = myNum * myDouble;

    int myQuotient = myNum/myDouble;
    float myQuotient2 = myNum/myDouble;
    int myQuotient3 = myDouble/myNum;
    float myQuotient4 = myDouble/myNum; 
```

**Data Structures in C++**   
C++ has many built-in complex data structures. Some of these include:   
1. **Arrays:** stores a collection of information that all **MUST** be the same data type. Here, "string" is declared when creating the array, so every piece of information in the array is a string. 
```cpp
string myArray[5] = {"Courtney", "Liv", "Aubrey", "Sarah", "Kayla"};
```
2. **Maps:** 
```cpp
 map <string, int> dogs = { {"Tuukka", 7}, {"Chloe", 4}, {"Bentley", 12}, {"Cleo", 3}};
```

### Conventions 

C++ is a statically, strongly, and explicitly typed language. 
- **statically typed:** values are attached to types at composite time. 
- **strongly typed:** variables cannot be implicitly changed, must be explicitly changed. For example, if x = "5", x MUST be explicitly converted into an integer to be used as an integer
- **explicitly typed:** type of variable needs to be declared. For example, **int** x = 5 is the correct syntax, with "int" declaring the variable type.

Binding for identifiers and operators happens at compile time in C++. 








