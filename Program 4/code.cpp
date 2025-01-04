//Develope A Program Read The Number And Check If It Is Prime Number or Not

#include<iostream>
using namespace std;

int main (){

  int n, i, count=0;
  cout<<"\n Enter The Number : ";
  cin>>n;

  for( i=1; i<=n; i++)
    {
      if(n%i==0)
       {
          count++;
       }
    }
    if(count==2)
      {
        cout<<"\n"<<n<<" Is Prime Number : ";
      }
   else
      {
        cout<<"\n"<<n<<" Is Not Prime Number : ";
      }

return 0;
}
