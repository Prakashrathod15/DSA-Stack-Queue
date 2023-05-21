#include<iostream>
#include<cmath>
using namespace std;
// In this file we will see stack. okey But what is stack ?
// I think we saw that bunches of books are store in book shop could you remember how they are arranged ?
// if you see they are arranged like one on one in linear way such that if you want to access a particular
// book without breaking linear structure then you need to access books that are over that book.
// like this structure is nothing but stack. another example of stack is bunches of chairs.
// okey I understood. but what about impleamentation in code how we code it ? let see we have inbuild stack
// but we dont want to use this stack. We want to create our Own stack Okey so lets start.
// stack is an entity whose store data itself and it have its own functionalities to access data 
// I think to create stack we need class. But why we need class why ? 
// Beacause class provide our requirement of storing data and impleamenting functionalities in it in single 
// Entity. We see these fundamentals in Another OOPs concept series.
// so for creating class we use class.


// -------------------------------------------Stack------------------------------------------------
// stack is linear data structure like array and LinkedList in which we store nth number of element.
// But stack is abstract data type. Okey but what does mean abstract data type ?
// It means we perform operation ...i...e.. adding element, deleting element in specific way. while 
// performing operation on stack stack fallow some rules.
// stack fallow LIFO ( Last In First Out ) it means the element which insert first in stack is revomed
// from stack at last.
// internally stack store element in Array or LinkedList and add contraint in such way that they fallow 
// LIFO rule.
// While creating Stack we are not give access of our internal data storing structure that means we are not 
// give direct access of internal Array or LinkedList. we give access of function to user though that user 
// performe operations on the stack let see them one by one.
// before going to see functions of stack let see data member of stack 
// as we discuss we store data in stack in form of Array or LinkedList
// 1.Stack Using Array
// a.We take an pointer variable whose store address which allocated by new keyword. - int* data;
// b.second we we take and variable named as nextIndex which point the index of array in which nextelement
//    is store. - int nextIndex;
// c.And we take another int type variable who store capacity or size of or stack  - int capacity.

// lets talk about functions of stack.
// 1.bool Isempty() - this function tell us that are stack is empty or not. Okey but what logic behind this 
// function ? how it work ?
//    Isempty() function check nextIndex value if nextIndex value is equal to 0. the he return true that means
//    our stack is empty else he return false.
 
// 2.void push() - push() used to insert element in the stack. how it work ? first we check that Is it space available 
//   in the stack or not. Okey but how it know that space available in the stack or not for that as create isempty() 
//   using it push() finded that stack is empty or not. if stack is empty. then he insert element in place of nextIndex 
//   and increase nextindex else he display massege that our stack is full.
 
// 3.int pop()  - pop() used to remove element in the stack. how it work. we know in case of array their not physical 
// deletiong is exit if we want to delete element in the array then we do some logical deletion same here we used.
// first we check our stack is empty or not through Isempty() the if not empty then we collect nextIndex-1 value in 
// a variable then we decrease nextIndex value and return varible value.

// 3.int top() - while creating stack we discuss that we are not give access of or internal structure so if user want to know
// what element is placed on the top of the stack the user use this element. this function show or return top most element in 
// the stack. how it work ? first he check our stack is empty or not if not then he return nextIndex-1 element.
   
//    that how our stack is worke. but i think this is not ideal stack beacuse ideal stack never ask size okey for
//    that we need to create our stack dynamically let see how to create stack dynamically in next file .

class stackUsingArray{

    int* data;
    int nextIndex;
    int capacity;

    public:
      // This is static stack.
     // parameterised constructor it gave size of stack and allocate those many byte space on heap   
       stackUsingArray(int n)
       {
              data = new int[n];
              nextIndex = 0;
              capacity = n;
       }

       // function 1 IsEmpty() - it return boolean value if stack is empty means it not contain any element then it return true else it reurn false

       bool IsEmpty()
       {
           if(nextIndex==0)
           return true;
           else 
           return false;
           
           // the above code I will write in single line 
            return nextIndex==0;

       }

       // function - 2 Top() - it return top most element in the array which is present in the array 

       int Top()
       {
           if(IsEmpty())
           {
               cout<<" stack is Empty "<<endl;
               return INT8_MIN;
           }

           return data[nextIndex-1];
       }

       // function 3 - Push() - Push() insert element in the stack in particular order which is Know as FILO - last in first in last out.

       void push(int element)
       {
              if(nextIndex==capacity)
              {
                  cout<<" stack is Fulled ! "<<endl;
              }

              data[nextIndex] = element;
              nextIndex++;
       }

       // function 4 - pop() used in stack for remove element from stack and return removed element to user
       // As we Know revome element in the array it is not physical process it is logical process

       int pop()
       {
               if(IsEmpty())
               {
                    cout<<" stack is empty "<<endl;
                    return INT8_MIN;
               }

               int element = data[nextIndex-1];
               nextIndex--;
               return element;
       }

};

int main()
{

    stackUsingArray s(2);
   s.push(1);
   s.push(2);

   cout<<s.pop()<<endl;
   cout<<" at top "<<s.Top()<<endl;
    cout<<s.pop()<<endl;
     cout<<s.Top()<<endl;
    


    

    return 0;
}
