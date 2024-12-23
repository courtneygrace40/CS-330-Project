# Variables, Data Types, and Operators
(https://www.w3schools.com/cpp/cpp_variables_identifiers.asp)

Here are the rules for naming variables in C++:
- Variables **MUST** begin with a letter or an underscore 
- Variables can contain letters, digits, and underscores
- Case-sensitive 
- Variables cannot contain whitespace or special characters

## Some more information about variables and objects in C++:  
There are 98 reserved keywords in C++. This includes words like "bool", "break", "or", "public", and "if". Typically, programmers use **"CamelCase"** for C++, which means that words are separated by capitals. For example, "myNum" would be CamelCase. When a variable is declared, the type must also be declared before the name. 

### Mutability

Objects in C++ are **mutable** by nature but can be converted to immutable by using "const". The "const" keyword is short for constant, meaning that the variable will become a constant, or in other words, **immutable**. 

```cpp
const int myNum = 8;
```

## Variable Types  
**Here are the basic data types for variables in C++:** (from https://www.w3schools.com/cpp/cpp_variables.asp)
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
5. **Boolean:** a Boolean (true or false) is stored with this data type
```cpp
bool myBoolean = true;
```
6. **Pointers:** returns the address of the variable it is "pointing" to 
```cpp
string* ptr = &myString;
```
Pointers are a significant data type in C++. They are used to change values stored in variables directly. Pointers point to values on the stack, but can also be empty values pointing to the heap. When a pointer is empty, the C++ coder allocates memory on the heap.  

After a pointer has been created, it can be dereferenced to change the value stored at the address it is pointing to. 


7. **String:** text is stored with this data type 
```cpp
string myString = "Courtney";
```
**A note on strings:**
In C++, the string library is a set of useful functions that can be used on strings in C++. This library is used by writing #include <string> at the program's top, like this: 

```cpp
#include <string>
```

## Operations with Different Types 
There are many different operators used in C++. (from https://www.w3schools.com/cpp/cpp_operators.asp)
Some of these include: 
1. **Arithmetic Operators** (used with ints, doubles, floats)
- (+) (addition)
- (-) (subtraction)
- (*) (multiplication)
- (/) (division)
- (%) (modulo, which gets the remainder)
2. **Relational Operators** (ints, doubles, floats, strings)
- (==) (is equal to)
- (!=) (is not equal to)
- (>) (is greater than)
- (<) (is less than)
- (>=) (is greater than or equal to)
- (<=) (is less than or equal to)
3. **Logical Operators** (expressions)
- exp 1 **&&** exp2 (Logical **AND**)
- exp1 **||** exp2 (Logical **OR**)
- **!** exp (Logical **NOT**)
4. **Bitwise Operators** (ints)
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

  
Here, the previously declared variables from above are used to perform different operations, and different types are used together in statements. C++ supports implicit conversion to deal with mixed-type operations. This means C++ converts variables to the same type before completing operations. Because values have to be declared as a type, C++ will convert the types into the correct type. (https://medium.com/@ctchalland/when-you-mix-nuts-and-bolts-type-conversion-c5f4f07e4d83)

There are also ways to explicitly change types of variables. This includes declaring a new type for a variable through casting (```int myDouble = int(myDouble);```) and using to_string() (```string strNum = to_string(myNum);```). (https://unstop.com/blog/type-casting-and-type-conversion-in-cpp & https://unstop.com/blog/strings-in-cpp)

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

## Data Structures in C++   
C++ has many built-in complex data structures. Some of these include:   
1. **Arrays** (https://www.w3schools.com/cpp/cpp_arrays.asp)
Arrays store a collection of information that all **MUST** be the same data type. Here, "string" is declared when creating the array, so every piece of information in the array is a string.

```cpp
string myArray[5] = {"Courtney", "Liv", "Aubrey", "Sarah", "Kayla"};
```

2. **Maps** (https://www.w3schools.com/cpp/cpp_maps.asp)
Maps store information in key, value pairs in a similar way to a dictionary. 
```cpp
 map <string, int> dogs = { {"Tuukka", 7}, {"Chloe", 4}, {"Bentley", 12}, {"Cleo", 3}};
```

3. **Structures** (https://www.w3schools.com/cpp/cpp_structs.asp)
Structures store data in a similar way to a class. Instances can be created if a structure is named. Here, a struct named "MyStruct" is created and an instance is created. 

```cpp
struct MyStruct{             
  int myNum;         
  string myString;   
}
MyStruct myStructure;
myStructure.myNum = 2;
```

4. **Lists and Vectors** (https://www.w3schools.com/cpp/cpp_list.asp & https://www.w3schools.com/cpp/cpp_vectors.asp)
To create lists and vectors in C++, their libraries must be included. The list library is included through #include <list>, and vector included through #include <vector>. They function similarly; however, vector items can be indexed while list objects cannot be, while lists are better for adding and removing items from both ends. Here is an example of each:

### Vector:
```cpp
vector <string> names = {"Courtney", "Liv", "Aubrey", "Kayla"};
```

### List:
```cpp
list <string> names = {"Courtney", "Liv", "Aubrey", "Kayla"};
```

