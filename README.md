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

Typically, programmers use **"CamelCase"**, which means that words are separated by capitals. For example, "myNum" would be CamelCase.   

When a variable is declared, the type must also be declared before the name.  

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
7. **Pointers:** 
```cpp
string* ptr = &myString;
```

**Operations with Different Types**   
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
Here are some of the data structures used in C++:
1. **Arrays:** stores a collection of information that all MUST be the same data type. Here, "string" is declared when creating the array, so every piece of information in the array is a string. 
```cpp
string myArray[5] = {"Courtney", "Liv", "Aubrey", "Sarah", "Kayla"};
```
2. **Maps:** 
```cpp
 map <string, int> dogs = { {"Tuukka", 7}, {"Chloe", 4}, {"Bentley", 12}, {"Cleo", 3}};
```

### Conventions 

C++ is a statically, strongly, and explicitly typed language. 
- **statically typed:** values are attached to types at composite time
- **strongly typed:** 
- **explicitly typed:** type of variable needs to be declared








