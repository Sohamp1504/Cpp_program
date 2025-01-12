//Develope The Program Of Dot Operator

#include<iostream>
using namespace std;
 
class Sample
  {
    private :
      int x;
      float y;

    public :
       void set (int a ,float b)
          {
            x = a;
            y = b;
          }

      void display ()
        {
          cout<<"\n x : "<<x;
          cout<<"\n y : "<<y;
        }

    };

 int main ()
  { 
    Sample s1, s2;

      s1.set (23,4.5);
      s2.set (97,7.9);

      s1.display();
      s2.display();

return 0;
  }  
