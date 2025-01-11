//Develope The Program Of Pass by Value

#include<iostream>
using namespace std;

void swap(int a, int b);

int main() {
    int x = 10;
    int y = 20;

    cout << "\nValue Before calling Swap:";
    cout << "\nx : " << x;
    cout << "\ny : " << y;

    swap(x, y); 

    cout << "\nValue After calling Swap:";
    cout << "\nx : " << x;
    cout << "\ny : " << y;

    return 0;
}


void swap(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;

    
    cout << "\n\nInside Swap Function (Local Changes):";
    cout << "\na: " << a;
    cout << "\nb: " << b;
}
