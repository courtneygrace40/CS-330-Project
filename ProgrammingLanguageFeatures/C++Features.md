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

