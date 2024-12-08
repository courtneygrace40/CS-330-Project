

#include <iostream>
#include <map>
using namespace std;

int main() {

    //Letter variable types 
    string myString = "Courtney Sweeney";
    char myLetter = 'C';

    //Number variable types 
    float myFloat = 6.59;
    double myDouble = 9.78;
    int myNum = 8;
    int myNum2 =7;
    myNum2 += myNum; 

    //Boolean variable
    bool myBoolean = true;

    //Arrays in C++
    string myArray[5] = {"Courtney", "Liv", "Aubrey", "Sarah", "Kayla"};

    //Maps in C++ (similar to dictionaries)
    map <string, int> dogs = { {"Tuukka", 7}, {"Chloe", 4}, {"Bentley", 12}, {"Cleo", 3}};


    //Pointer in C++
    string* ptr = &myString;


    //Math with variables 
    int mySum = myNum + myDouble;
    float mySum2 = myNum + myDouble;

    int myProduct = myNum * myDouble;
    float myProduct2 = myNum * myDouble;

    int myQuotient = myNum/myDouble;
    float myQuotient2 = myNum/myDouble;
    int myQuotient3 = myDouble/myNum;
    float myQuotient4 = myDouble/myNum; 

    float myModulo = mySum % myNum; 


    //Print statements 
    cout << myQuotient2;
    cout << myArray;
    cout << myBoolean;
    cout << myProduct2; 
    cout << myModulo;
    cout << myNum2;

    return 0;
}
