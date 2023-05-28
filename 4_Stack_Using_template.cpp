#include<iostream>
using namespace std;

template <typename t>

class Stack_using_template
{
    t* data;
    int nextIndex;
    int capacity;

    public:

    Stack_using_template()
    {
          data = new t[4];
          nextIndex = 0;
          capacity = 4;
    }
     
    bool Isempty()
    {
          return nextIndex == 0;
    }

    void push(t element)
    {
        if(nextIndex==capacity)
        {
              t* newOne = new t[2*capacity];

              for(int i = 0; i<capacity; i++)
              {
                    newOne[i] = data[i];
              }

              delete[] data;
              capacity *= 2;
              data = newOne;
        }

        data[nextIndex] = element;
        nextIndex++;
    }

    t pop()
    {
          if(Isempty())
          {
               cout<<" stack is empty "<<endl;
               return -1;
          } 
          t element = data[nextIndex-1];
          nextIndex--;
          return element;
    }

    t Top()
    {
         if(Isempty())
         {
            cout<<" stack is empty "<<endl;
            return -1;
         } else {

              return data[nextIndex-1];
         }
    }


};

int main()
{

 Stack_using_template<int> s;

 s.push(1);
 s.push(2);

 cout<<s.pop()<<endl;

 cout<<s.Top()<<endl;

 cout<<s.pop()<<endl;

 cout<<s.Top()<<endl;








    return 0;
}