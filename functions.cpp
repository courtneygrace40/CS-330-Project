#include <iostream>
#include <string> //String library 
using namespace std;


//My global variables of this program 
string greeting = "Hello, my name is Courtney!";
string myStringsArray[2];
double num = 10;
 

//Function that prints a string
void myFunction(){
    cout << "Hello World!";
}

//Function that multiplies two integers and returns the product
int multiplication(int num1, int num2){
    int product = num1 * num2;
    return product;
}

//Function that splits a string into two strings
void splitter(string myString, string myArray[2]){
    char myChar = ' '; //splits the string on the first space 
    int position = myString.find(myChar); //Finds where the first space is located in the string 
    string myString1 = myString.substr(0, position); //The first string is found using substr
    string myString2 = myString.substr(position, -1); //The second string is found using substr
    myArray[0] = myString1; //Adds value of string to the array that was input into the function
    myArray[1] = myString2; //Adds value of string to the array that was input into the function
}

//Function that finds the factorial of a number
double factorial(double myNum){
    if (myNum > 1) {
        myNum *= factorial(myNum - 1);
        return myNum;}
    else {
        return 1;
        }
    }

//A results function that prints the results of each function
void results(string greeting, string myArray[2], double num, double myFactorial, int myProduct){
    cout << "\nMy product is: " << myProduct;
    cout << "\nMy original string is: " << greeting;
    cout << "\nMy first string is: " << myStringsArray[0];
    cout << "\nMy second string is: " << myStringsArray[1];
    cout << "\nThe fatorial of " << num << " is: " << myFactorial;
}

//My main function
int main(){
    myFunction();
    int myProduct = multiplication(6, 7);
    splitter(greeting, myStringsArray);
    double myFactorial = factorial(num);
    results(greeting, myStringsArray, num, myFactorial, myProduct);
    return 0;
}