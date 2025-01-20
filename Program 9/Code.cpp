//Develope The Program Of The Function Overloading 

#include<iostream>
using namespace std;
 
 int square(int a){
 	return a*a;
 }
 
 int square(double a){
 	return a*a;
 }
 
int main(){
	cout<<"\n Square Of 5 : "<<square(5);
	
	cout<<"\n Square Of 3.5 : "<<square(3.5);
	
	return 0;
}
