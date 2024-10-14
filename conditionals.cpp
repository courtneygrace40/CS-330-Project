#include <iostream>
#include <string> //String library 
using namespace std;


void switchStatements();
void bitwiseStatements();
void oneCondition();
void twoConditions();
void ifElseStatements();




void oneCondition(){
    int x = 8;
        if (x == 8){
            cout << "\nx is 8!";
        }
}

void twoConditions(){
    int x = 8;
    int y = 10;
        if (x == 8 && y == 10){
            cout << "\nx is 8 and y is 10!\n";
        }
}

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

void switchStatements(){

    int a;
    cout << "Enter a number from 1 to 7.";
    cin >> a;
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

    void bitwiseConditions(){
        int a = 10;
        int b = 12;
        cout << a & b;
        

    }



}

int main(){
    void oneCondition();
    void twoConditions();
    void ifElseStatements();
}
