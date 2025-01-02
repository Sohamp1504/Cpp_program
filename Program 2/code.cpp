//Develope A Program To Read Number And Print Multiplication Table

#include<iostream>
using namespace std;

int main (){
  int n,i;

  cout<<"\n Enter The Number :";
  cin>>n;

  for(i=0 ; i<=10; i++)
 {
  cout<<n<<"*"<<i<<"="<<n*i<<"\n";
 }

return 0;

}
