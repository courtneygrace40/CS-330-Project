# Functions 
(https://www.w3schools.com/cpp/cpp_functions.asp)

Programmers use functions extensively in C++. A "beautiful" program consists of a main program (a function in itself) that calls other functions. Here is an example of a function in C++:

```cpp
void myFunction(){
    cout << "Hello World!";
}
```
When called, this function will print "Hello World!" to the terminal.   

## The syntax of a function is as follows:  
**Header:** function output type | function name | (parameter type | parameter name)   
**Program delineator**: {} curly brackets delineate the function, which open following the header and closing the function after the final line.   

Some of the different types of output include int, string, and void. A void function, such as myFunction, will print to the screen. The **"main"** function in C++ is actually type **int**. This is because the final line is always "return 0;", which signals the end of the program.   

Here is the main function. It takes in no parameters and always returns 0. C++ programs **MUST** have this function to run. 

```cpp
int main(){
    cout << "Hello World!";
    return 0;
}
```

Here is an example of a function that has parameters and returns an integer to be used in the main function. 
```cpp
int multiplication(int num1, int num2){
    int product = num1 * num2;
    return product;
}
```
Notice the output type declaration and parameter type declarations. "Product" is what is returned, and it is an int, so this program will run. 

Functions in C++ can take in multiple parameters of multiple types. Here is an example of a function that takes in a string parameter and an int parameter and prints the values to the screen:

```cpp
void whatNumber(string name, int num){
   cout << "\nMy name is " << name << ", and this is my number: " << num; 
}
```

Functions in C++ cannot by nature return two values. However, there are a few different ways around that. One way around this is to use **arrays**. When arrays are changed inside of a function in C++, they are also changed outside of it. Here is an example of a function that splits a string into two and returns both strings by storing them in an array. 

```cpp
void splitter(string myString, string myArray[2]){
    char myChar = ' '; 
    int position = myString.find(myChar); 
    string myString1 = myString.substr(0, position); 
    string myString2 = myString.substr(position, -1); 
    myArray[0] = myString1; 
    myArray[1] = myString2; 
}
```

In that function, the values of the strings are stored in the array "myArray" which also exists outside of the function. These values can be accessed in other functions if the array is sent into that function, or can be accessed from main. 

The other way that functions can return two values in C++ is through **pointers**. Here, the function receives the addresses of two variables. It then uses the addresses to make a change in the function. Here, the address of a is the address of a variable x that lives in main. When the value at the address of a is changed, the value at the address of x is changed because **the address of a = the address of x**. This makes it so that values don't have to be returned to change the information stored at a value outside of the function. 

```cpp
void swap(int *a , int *b){  
    int temp = *a;  
    *a = *b;
    *b = temp;
}
```

C++ supports recursive functions. A recursive function is when a function calls itself. Here is an example of a recursive function that finds the factorial of a number. 

```cpp
double factorial(double myNum){
    if (myNum > 1) {
        myNum *= factorial(myNum - 1);
        return myNum;}
    else {
        return 1;
        }
    }
```
C++ supports both pass-by-reference and pass-by-value. Pass-by-value works when a function has a copy of a variable passed into it. Something must be returned in this instance so that any changes to the variable are meaningful. When a function uses pass-by-value, the original value stays the same. Here is an example of a function using pass-by-value in C++:

```cpp
double num2 = 6;
double num3 = 7;

int multiplication(int num2, int num3){
    int product = num2 * num3;
    num2 = 12; 
    return product;
}

int myProduct = multiplication(num2, num3);

```

Here, **num2** and **num3** are both sent into the function. In the function, the value of **num2** is changed to 12. However, this does not change the value of **num2** outside of the function because the **num2** in the function is only a copy. 

Pass-by-reference occurs when the reference to the address of a variable is passed into a function. In C++, this is achieved through pointers. When pointers are passed into a function, the value of a variable outside of the function can be changed directly. Here is an example of a function using pass-by-reference in C++:


```cpp
double num2 = 6;
double num3 = 7;
double product = 0;

void multiplication(int num2, int num3, double &a){
    a = num2 * num3; 
}

multiplication(num2, num3, product);
```

