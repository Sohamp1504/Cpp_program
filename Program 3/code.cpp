//Develope The Program Fibonacci Series Up To 20 Terms

#include<iostream>
using namespace std;

int main (){

    int x=0, y=1, sum, i;

    cout<<"Fibonacci Series";
    cout<<"\n"<<x<<"\t"<<y;

  for( i=1; i<18; i++)
  {
    sum = x+y;

    cout<<"\t"<<sum;
    x=y;
    y=sum;

  }

return 0;
}
