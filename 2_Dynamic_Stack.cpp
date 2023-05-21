#include<iostream>
#include<cmath>
using namespace std;

// in this file we see how dynamic stack is created. Okey but what does mean dynamic stack ? Okey so, first we see meaning of dynamic 
// dynamic means changeble opposite of dynamic is static right? yes means not changeble
// we had see static stack that we create in stackUsingArray file. Now we see dynamic stack using array 
// in privious we gave size to stack and stack is create only for that size but as we know ideal stack like this. means stack does not
// need any size or stack not give any size so we create dynamic stack it means we are not gave any size we just insert element in it.
// Okey. But how we impleament this ? we just gave any value like ...1..2.. like that to capacity in constructor of stack and allocate
// those many space for our current stack. when element is inserted in the stack and stack is reached to nextindex == capacity then
// we create new array of double its current array size copy all element of current array to newarray and deallocate the current array
// and then we point our current pointer to new array pointer.
// If you want to see how it code implemenation done ! we do this operation in just 5 step. please scroll down and reach to the push() here you see step by step approach of
// code and approach.  Thank you !.

class dynamic_stack{

    int* data;
    int nextIndex;
    int capacity;

    public:
      // This is static stack.
     // parameterised constructor it gave size of stack and allocate those many byte space on heap   
       dynamic_stack()
       {
              data = new int[2];
              nextIndex = 0;
              capacity = 2;
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
                  // cout<<" stack is Fulled ! "<<endl; now we not display this massege to user instead of this we create an we array of double 
                  // size and insert element of privious array 

                  // steps 
                  // step - I ( create new Array double of size to current array size. )

                  int* newone = new int[2*capacity];  // okey done !


                 // step - II ( copy all data from current array to new array )
                  for(int i = 0; i<capacity; i++)
                  {
                     newone[i] = data[i];
                  }   // okey done !
                 
                 // step - III ( deallocate current array )

                  delete[] data; // done

                // step - IV ( Increament size of our capacity to double of current array size. )
                  capacity *= 2;

                // step - V ( last step - Point our Current pointer to new array )
                  data = newone;

                // and it done ! wow how wonderfull is it.

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

    dynamic_stack d;

    d.push(1);
    d.push(2);
    d.push(3);
    d.push(4);

    cout<<d.Top()<<endl;
    cout<<d.pop()<<endl;
    cout<<d.pop()<<endl;


    

    return 0;
}