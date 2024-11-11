#include <iostream>
#include <string> //String library 
using namespace std;


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


