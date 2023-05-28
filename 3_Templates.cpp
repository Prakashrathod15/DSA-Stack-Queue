#include<iostream>
using namespace std;

// In this file we will see about Templates. What is the meaning of template in hindi ? template means sacha means sample right ! yes
// To uderstand template lets take an example we will create a pair class and you know pair is nothing but combination of two element 
// Lets take those two element in int okey, Lets do !
class pair_One
{  
    int x;
    int y;

    public :
       
       // 1. constructor 
       pair_One(int a, int b)
       {
            x = a;
            y = b;
       }

       // setters and getters

       void setX(int a)
       {
           x = a;
       }

       int getX()
       {
          return x;
       }

       void setY(int b)
       {
           y = b;
       }

       int getY()
       {
           return y;
       }

};

// Our pair class is ready but now my requirment is change need to create a pair of float data-type and then we need a pair class character 
// data-type. So how i solve this problem i had already create int data-type pair class Can I use this int data-type pair class for float,
// double , char data type - not at all. as we know we need to tell compiler before our code compiled that which data - type we going to used
// But just think how is it going to wonderfull that we dont need to tell compiler before our code compiled that which data - type we going to
// use and at run time we use that one class for various data-type. Can I achieve this feature - yes . Okey but how ?
// Using template we can achieve this - okey as we discuss priviously that template means sample. so we use template as data-type. It means we
// are telling to compiler before our code compiled that template data-type means we use temporary data-type means sample of data-type and
// at run time we use different data-type as per as our requirement.
// for using template we need to include template file - template <typename t>
// and we write this above statement in the above of class.
// template <typename t> means we use template data-type or temporay data-type named t. and v also act like temporay data-type.
// and we use t as data type. lets see 
template <typename t, typename v>
class Pair
{
   t x;
   v y;

   public: 
      

      // 1.parameterised constructor
      Pair(t a, v b)
      {
          x = a;
          y = b;
      }

      // 2.setters and getters

      t getX()
      {
          return x;
      }

      void setX(t a)
      {
           x = a;
      }

      v getY()
      {
           return y;
      }

      void setY(v a)
      {
          y = a;
      }

};

// Now we can make any data - type pair as we want 
// In next file we are going to see using template we create stack 
// template provide flexibility in our code that same thing we achieve in stack 
// let see next file.....thank you !

 



int main()
{


   Pair<char,char> p('a','b');

   cout<<p.getX()<<endl;
   cout<<p.getYN()<<endl;













    return 0;
}