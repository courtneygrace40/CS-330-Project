# Classes and Objects

(https://www.w3schools.com/cpp/cpp_classes.asp)

## Syntax

C++ is an object-oriented programming language. This means that programming in C++ revolves around the creation of many objects. Classes are used to create objects, which are instances of the class. 

Here is an example of a class. This class has three public attributes and a public method. When an instance of this class is created, it has all of the following attributes and has the method described in the class. Here, the class attributes do not have default values. **"string fName = "BLANK";"** where **"string fName;"** is would code a default value. 

To code a class, begin with the "class" keyword followed with the name of the class. Inside of the curly brackets for the class, the public, private, and protected keywords can be used to define the access of the attributes and methods. A class can have a mix of access for its attributes and methods. 

**Access Types:** 
1. Public: can be accessed from outside the class
2. Private: cannot be accessed from outside the class
3. Protected: can be accessed only from inherited classes

**Example Class**

```cpp
class Person {
        public: 
            string fName;
            string lName;
            string bDay;
            void toString(){
                cout << "Hello, " << fName << " " << lName << "!";
            }
    };
```

### String Method and the "Friend" Keyword

C++ supports the overriding of operators, which can be used to create a "String" method to print an object. C++ uses **cout <<** to print, so the operation to be overridden would be **<<**. 

Overriding uses references to point to existing variables. When overriding to create the string method, there are references to the output stream and to the object that is being made into a string. 

```cpp
//This is inside of the class "Student" and is public.
friend ostream& operator <<(ostream& os, const Student& st);

//This is outside of the class declaration.
ostream& operator <<(ostream& os, const Student& st){
    os << st.fName << " " << st.lName << " is a " << st.major << ".";
    return os;
}
```

(code inspiration: https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170) 


**"Friend" Keywod**

Classes can use the keyword "friend" to allow other classes to use private and protected attributes and methods. In the example above, the "friend" attribute declares the ostream& operator function to use private and protected variables of the "Student" class. This is useful for writing string methods. 

(https://learn.microsoft.com/en-us/cpp/cpp/friend-cpp?view=msvc-170)

### Class Inheritance

C++ supports class inheritance. To have one class inherit from another, use this syntax: **class Child: public Parent{}**. This tells C++ to use the attributes and functions of the parent class. There is no "super" keyword in C++ like there is in Java and Python, as C++ understands when attributes of an object's parent class are called. Here is an example of inheritance, where the class Student inherits from the class Person. 

```cpp
class Student: public Person{
        public:
        //Student specific attributes 
            string major = "Undeclared";
            int id;
            //Student specific method 
            void declareMajor(){
                cout << "\nEnter major: ";
                cin >> major;
                cout << "Major updated to " << major << ".";
            }

};
```

**Multilevel and Multiple Inheritance**

C++ supports both multilevel and multiple inheritance. **Multilevel inheritance** occurs when an objects is derived from a child of a different class. If there was a "Student Athlete" class derived from the "Student" class, it would be the grandchild of the "Person" class. 

**Multiple inheritance** occurs when a class inherits from two parent classes. If there was a "Student" class and an "Athlete" class, a "Student Athlete" class could inherit from both of them. To do this, the syntax would be: **class StudentAthlete: public Athlete, public Student{}**. In this case, the StudentAthlete class would inherit the attributes of both an Athlete and a Student. 

**Overriding Functions**

When a class inherits from another class, it can override functions so that they are specific to that class. This is very useful since oftentimes classes need the same function (an animal noise function, for example) but need different outputs or uses from it (animals make different noises). 

Here is an example of a class overriding a function: 

**Original function in Person:**
```cpp
virtual void greeting(){
                cout << "Hello traveler!";
            }
```

**Overridden function in Student:**
```cpp
void greeting() override{
                cout << "You should be studying.";
            }
```

(code inspiration: https://en.cppreference.com/w/cpp/language/override)

There are two important keywords used in these functions: **virtual** and **override**. Virtual is used when a base class has a method that is expected to be overriden. This is required when trying to override a class, otherwise the program will error. 

The **virtual** keyword is also used when creating abstract classes. Abstract classes leave the methods without code and instead declare the name. 

