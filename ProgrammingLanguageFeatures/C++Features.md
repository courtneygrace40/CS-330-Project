# Language Conventions 

C++ is a statically, strongly, and explicitly typed language. 
- **statically typed:** values are attached to types at composite time. 
- **strongly typed:** variables cannot be implicitly changed, must be explicitly changed. For example, if x = "5", x MUST be explicitly converted into an integer to be used as an integer
- **explicitly typed:** type of variable needs to be declared. For example, **int** x = 5 is the correct syntax, with "int" declaring the variable type.

Binding for identifiers and operators happens at compile time in C++, except when the virtual keyword is used. When virtual is used, binding occurs at runtime. (from https://www.geeksforgeeks.org/early-binding-late-binding-c/)

In C++, aliases can be used to create new identifiers for variable types. The "using" and "typedef" keywords are used to do this. Here, I will use the alias "str" for string. 

```cpp
using str = string;
```

Aliases can also be used with more complex types. For example, you could create a "func" type that has a specific input and output parameter. Here is an example: 

(from https://learn.microsoft.com/en-us/cpp/cpp/aliases-and-typedefs-cpp?view=msvc-170)
```cpp
using func = void(*)(int);

// func can be assigned to a function pointer value
void actual_function(int arg) { /* some code */ }
func fptr = &actual_function;
```

Here, func is created as a function that takes in an integer and returns a void. Then, a function that returns a void and takes in an integer is created. Then, a "func" is created that stored the address of the function that matches the parameters used by type "func". Now, the actual function can be called using fptr. 

## Scoping and Stack Storage

The scoping of a language is where variables can be accessed. C++ is a statically scoped language, meaning the scope of the variable cannot change once the program is executed. (https://www.geeksforgeeks.org/static-and-dynamic-scoping/)

In C++, variables created in functions are visible during the duration of that function and die when the function ends. If a variable is global, it is visible throughout the entire program and only dies when the program ends. Static variables are different. If a static variable is declared inside of a function, it is only visible inside of the function but lives until the end of the program. 

Scoping can cause side effects in languages where variables are changed when they are not supposed to be. In C++, using global variables and using pass-by-reference can create side effects. One of the guard rails in C++ is the "**const**" keyword, which causes the data in the variable to be unable to be changed. Another guardrail is to use variables only in the scope for which they were created. (https://www.w3schools.com/cpp/cpp_variables_constants.asp)

Variables are stored on the stack in C++. As functions and variables are called, they are pushed onto the stack and popped off once they are no longer needed. Dynamically allocated memory is stored on the heap. (https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/)

## Dangling Else Problem in C++
(https://www.geeksforgeeks.org/dangling-else-ambiguity/) 

The "dangling else" problem arises when it is not clear which "if" an "else" is paired with. Different languages deal with this problem in different ways.

In C++, the "dangling else" can be dealt with by correctly using curly brackets to delineate scope. Since C++ does not understand indentation, curly brackets need to be used so that the compiler knows which if the else is associated with. However, if brackets are not used correctly, C++ uses the innermost "if" as the "if" for the "else" that is dangling. 
