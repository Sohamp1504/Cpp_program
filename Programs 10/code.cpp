//Develope The Program Of The Function Overloading 

/* 
	1) Find The Maximum Between The Intergers
	2) Find The maximum Between The Floats
	3) Find The Maximum Between Three Intergers
*/

#include<iostream>
using namespace std;
 
 int max(int , int);
 double max(double , double);
 int max (int , int, int);
 
int main(){
	cout<<"\n The Maximum Between 15 & 45      : "<<max(15,45);
	
	cout<<"\n The Maximum Between 7.6 & 4.5    : "<<max(7.6,4.5);
	
	cout<<"\n The Maximum Between 15 , 45 & 50 : "<<max(15,45,50);
	
	return 0;
}

	int max(int a , int b){
		if(a>b)
			return a;
		else
		  return b;
	}
	
	double max(double a , double b){
		if(a>b)
			return a;
		else
		  return b;
	}
	
	int max(int a , int b, int c){
		if(a>b && a>c)
			return a;
		else if(b>c)
		  return b;
		else
		  return c;
	}
	
