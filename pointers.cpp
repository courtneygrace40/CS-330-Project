#include <iostream>
#include <string> //String library 
using namespace std;

//This file is an example of how pointers work in C++. 
int main(){
    int x = 136;
    int *xp = &x;
    int y = 118;
    (*xp) = 10;
    cout << x;
    xp = &y;
    (*xp) = 67;
    cout << y;
    cout << x;


    
    return 0;
}


