//Develope The Program Of Scope Resolution Operator

#include <iostream>
using namespace std;

int x = 10;

int main() {
    int x = 20; 
  
    cout << "Local x: " << x << endl;      
    cout << "Global x: " << ::x << endl;  
    return 0;
}
