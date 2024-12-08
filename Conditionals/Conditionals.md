# Conditionals 
(https://www.w3schools.com/cpp/cpp_conditions.asp)

C++ uses the boolean values of ```true``` and ```false```. When a boolean is evaluated, C++ returns 1 for "true" and 0 for "false". 

C++ has a variety of conditional statements; for selection statements, C++ uses switches and if/else statements. For repetition statements, C++ uses ```for``` and ```while``` loops. 

## Selection Statements 

### If/Else Statements

Here is an example of a conditional statement with one condition. 

```cpp
void oneCondition(){
    int x = 8;
        if (x == 8){
            cout << "\nx is 8!";
        }
}
```
The syntax for if statements includes the condition in parentheses and the code to be executed in brackets. If there are more executable statements, C++ uses else if and the same syntax. 

```cpp
void ifElseStatements(){
    int a;
    int b = 17;
    cout << "I've thought of a number. Now, you type a number: ";
    cin >> a;
    if(a>b){
        cout << "Your number is bigger than my number! You chose " << a << " and I chose " << b << "!";
    }
    else if (a<b){
        cout << "Your number is smaller than my number! You chose " << a << " and I chose " << b << "!";
    }
    else{
        cout << "We chose the same number! You chose " << a << " and I chose " << b << "!";
    }

}
```

If/else statements can have multiple conditions. For or, C++ uses **&&** for the logical **AND**, **||** for the logical **OR**, and **!(statement)** for logical **NOT**. Here is an example of the logical **AND**. 

```cpp
void twoConditions(){
    int x = 8;
    int y = 10;
        if (x == 8 && y == 10){
            cout << "\nx is 8 and y is 10!\n";
        }
}
```
### Switch Statements

C++ allows switch statements. Switch statements compare the input to each case and execute based on when a case is matched. The break and default keywords can be used. If they aren't, the switch will then evaluate every piece of code after. **"Break"** will end the switch statement, and **"default"** is used to delineate code that should be evaluated if none of the cases are met. 

```cpp
void switchStatements(){

    int a = 4;
    
    switch(a){
        case 1:
            cout << "You are a Sunday!";
            break;
        case 2:
            cout << "You are a Monday!";
            break;
        case 3:
            cout << "You are a Tuesday!";
            break;
        case 4:
            cout << "You are a Wednesday!";
            break; 
        case 5: 
            cout << "You are a Thursday!";
            break;
        case 6:
            cout << "You are a Friday!";
            break;
        case 7:
            cout << "You are a Saturday";
            break;

    }
```

## Repetition Statements

### While Loops
(https://www.w3schools.com/cpp/cpp_while_loop.asp)

For loops in C++, variables exist only within the loop; their scope is limited. This is similar to function code blocks in how the variables are treated. (https://learn.microsoft.com/en-us/cpp/cpp/for-statement-cpp?view=msvc-170)

C++ supports while loops. Here is an example: 
```cpp
void whileLoop(){
    int i = 0;
    while(i<5){
        cout << "Smile!";
        i++; 
    }
}
```
The condition of the loop is in parentheses, and the code to be executed is in {}. 

Do while loops are very similar. 
```cpp
void doWhile(){
    int i = 0;
    do{
        cout << "Smile!";
        i++;
    }
    while(i<5);

}
```
Here, the condition is put after the code block. 

### For Loops
(https://www.w3schools.com/cpp/cpp_for_loop.asp)

C++ supports for loops. Here is an example: 

```cpp
void forLoop(){
   for(int i = 0; i < 5; i++){
        cout << "Smile!";
   }
}
```
The first statement in the parentheses is executed once. The second is the condition. The third is executed for each iteration of the loop. 

C++ also supports "for each" loops and nested for loops. Here is an example of each: 

**Nested Loop:**
```cpp
void nestedLoop(){
    for(int i = 0; i <= 2; i++){
        cout << "\ni: " << i;
        for(int j = 3; j <= 4; j++){
            cout << "\nj: " << j;
        }
    }
}
```

**For Each Loop:**
```cpp
void forEachLoop(){
    string names[2] = {"Courtney", "Liv"};
    for(string s: names){
        cout << s << "\n";
    }
}
```
This loop iterates over items in an array. 
