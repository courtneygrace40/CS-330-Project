#include <iostream>
#include <string> //String library 
using namespace std;






//One condition conditional 
void oneCondition(){
    int x = 8;
        if (x == 8){
            cout << "\nx is 8!";
        }
}

//While Loop
void whileLoop(){
    int i = 0;
    while(i<5){
        cout << "Smile!";
        i++; 
    }
}


//Do while loop
void doWhile(){
    int i = 0;
    do{
        cout << "Smile!";
        i++;
    }
    while(i<5);

}

void forLoop(){
   for(int i = 0; i < 5; i++){
        cout << "Smile!";
   }
}

void forEachLoop(){
    string names[2] = {"Courtney", "Liv"};
    for(string s: names){
        cout << s << "\n";
    }
}

void nestedLoop(){
    for(int i = 0; i <= 2; i++){
        cout << "\ni: " << i;
        for(int j = 3; j <= 4; j++){
            cout << "\nj: " << j;
        }
    }
}

//Two condition conditional
void twoConditions(){
    int x = 8;
    int y = 10;
        if (x == 8 && y == 10){
            cout << "\nx is 8 and y is 10!\n";
        }
}

//If/else statement 
void ifElseStatements(){
    int a;
    int b = 17;
    cout << "I've thought of a number. Now, you type a number: ";
    cin >> a;
    if(a>b){
        cout << "\nYour number is bigger than my number! You chose " << a << " and I chose " << b << "!";
    }
    else if (a<b){
        cout << "\nYour number is smaller than my number! You chose " << a << " and I chose " << b << "!";
    }
    else{
        cout << "\nWe chose the same number! You chose " << a << " and I chose " << b << "!";
    }

}

//Switch statement 
void switchStatements(){
    int a;
    cout << "\nEnter a number from 1 to 7: ";
    cin >> a;
    
    
    switch(a){
        case 1:
            cout << "\nYou are a Sunday!";
            break;
        case 2:
            cout << "\nYou are a Monday!";
            break;
        case 3:
            cout << "\nYou are a Tuesday!";
            break;
        case 4:
            cout << "\nYou are a Wednesday!";
            break; 
        case 5: 
            cout << "\nYou are a Thursday!";
            break;
        case 6:
            cout << "\nYou are a Friday!";
            break;
        case 7:
            cout << "\nYou are a Saturday";
            break;

    }


}



//Short-circuiting example
void shortCircuiting(){
    if(8==7 && 0/0){
        cout << "This shouldn't ever print.";
    }
    else{
        cout << "\nYay, C++ short-circuits!";
    }
}


int main(){
    oneCondition();
    twoConditions();
    ifElseStatements();
    shortCircuiting();
    switchStatements();
    whileLoop();
    doWhile();
    forLoop();
    nestedLoop();
    forEachLoop();
    return 0;
}


