//Develope A Program To Read The Number And check It Is Positive And negative

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"\n Enter The Number : ";
  cin>>n;

  if(n>0)
    {
      cout<<"\n"<<n<<"Is positive";
    }
  else
    {
      cout<<"\n"<<n<<"Is Negative";
    }

  return 0;
}
