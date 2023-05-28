#include<iostream>
using namespace std;
// let see what do you mean by Queue Using Array ? for that we need to first understood what is Queue ? So, tell me after covid period was enede 
// Have You go in a bank for deposition ? yes so for deposition you saw that their is a queue of people who are come bank for deposition & they 
// are all waiting for their turn. Can you seem the structure of Queue i think Queue is seem in structure of FIRST COME FIRST SERVE  means ....
// FIRST IN FIRST OUT just imagine the real queue you get idea how it work. So same work we do in the programming we will create queue. so we unde
// stood that what is an queue ! Okey Let see how we create it 
// How we create queue ! 
// If you see queue i think queue is maintain a linear structure right ? yes right queue is maintain linear structure & it can be huge. it is circular also
// Yes. In c++ have a such variable or structure which can be store data as linear manner ? yes we hava Array using array we can store data linearly
// Okey ! second think Array can be huge in size ? yes it can be Okey so last thing is array fallow circular structure ! Not but it store data in linear
// manner but using some logic we do this as circular ! Perfect so we write file name as QueueUsingArray.


// Now we are clear with what is the Queue let see more about c++ queue.
// In privious file we learn about stack like that we have queue which is also an linear data structure & abstract data type. Queue is used for storing data
// It means we store data linearly in queue as we did in stack Okey ! but what does mean by abstract data type ? previsouly we discussed that but okey
// we will talk what this one more time. so before going to see abstract data type we see how data is store in the queue ! okey 
// Queue internall store data same as stack. queue store internall data using array or Linkedlist. Okey ! so can we perform operation in queue same
// arrary or Linke list ? Not you cant beacuase inside in the queue their is some contraints are added on the array or linkedlist 
// okey ! it means that internall we saved data in array or linked list structure but we developed some layer on it and using  some function we are
// using accees the data. so abstract data type is data type in which we store data following some rule & access data using some functions it means how
// internally data is stored we dont care about it.
// okey, Lets discuss about the how we create queue ? In C++ queue is inbuild but we create user-define Queue by using 1.Array 2.Linkedlist
// 1.Using Array 
// In this file we create queue using array ! Okey But How we create ? Let see what should be needed inside the queue.
// We use array right - so for creating array we need size after sometime we replace it. so we keep size variable 1.int size & 2.Array 
// front front side of array we remove element & from back element so to keep track this we keep two element 1.front 2.nextindex.
// Okey so its clear that what we keep inside the queue Now let try to uderstood what function we use 
// As we discuss that we not give direct access of our queue we give access of our queue by function. Okey to access queue we use functions 

// 1.enqueue() - this function store element in the queue . the return type of this function is void. Okey But How it work ? what is the logic 
// behind this function ? - first he check space is available or not in queue if space is available then at nextIndex variable value he insert element
// to check space is available or not he use Isempty() function & if space is not availble then he simply print " queue is empty "

// 2.dequeue() - this function remove element from the queue & it return removed element from the queue. Okey but How it work ?
// first he check queue is empty or not for this he use Isempty function if Isempty return true then he he simpley print " queue is empty " & if 
// he return false the return front index index value & do frontindex--.


// 3.empty()   - this function check queue is empty or not if queue is empty then he return true alse he return false. what is the logic behind this
// function ? he check front==0 & nextindex = 0 then only return true else he return false.

// 4.Front()   - front() function is similar to top function of stack if queue is not empty then he return front index element.see function logic
// he check queue is empty or not using Isempty function if queue is empty then he return " queue is empty " else he return frontindex value.
// 

// Now we totally discuss funtion & its data-memeber & we try to combine data-memeber with functions in single entity for that we use class
// you know what is class - class is nothing but way of encapsulation. right so let create a queue class 
class QueueUsingArray
{
    int* data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;

    public :
        
        QueueUsingArray(int s)
        {
            data = new int[s];
            firstIndex = -1;
            nextIndex = 0;
            size = 0;
            capacity = s;
        }


        bool IsEmpty()
        {
              return size==0;
        }

        void enqueue(int element)
        {
              if(size==capacity)
              {
                  cout<<endl;
                  cout<<" queue is empty "<<endl;
                  cout<<endl;
              } else {
                   data[nextIndex] = element;
                   // nextIndex++; instead of this we do nextindex = (nextindex+1)%capacity; beacuase if we do nextindex++ then nextindex is reach
                   // to n-1 size of an array & if space is available in our queue then he index element in n position & our code lead to UA.
                   // for that we use this formula if nextindex = 3 and capacity = 5 then (3+4)%5 = 1 
                   nextIndex = (nextIndex+1)%capacity;

                   if(firstIndex==-1)
                   {
                        firstIndex++;
                   }

                   size++;
              }
        } 

        int front()
        {
            if(IsEmpty())
            {
                cout<<endl;
                cout<<" stack is empty "<<endl;
                return -1;
                cout<<endl;
            }
            else 
            {
                return data[firstIndex];
            }
        }

        int dequeue()
        {
              if(IsEmpty())
              {
                  cout<<endl;
                  cout<<" queue is empty "<<endl;
                  return -1;
                  cout<<endl;
              } else{
                   
                   int element = data[firstIndex];
                   firstIndex = (firstIndex+1)%capacity;
                   size--;
                   return element;
              }

              if(size==0)
              {
                  firstIndex= -1;
                  nextIndex = 0;
              }
        }
};




int main()
{
     QueueUsingArray* q = new QueueUsingArray(4);

     q->enqueue(10);
     q->enqueue(20);
     q->enqueue(30);
     q->enqueue(40);

     cout<<" front is : "<<q->front()<<endl;
     cout<<q->dequeue()<<endl;


     cout<<" front is : "<<q->front()<<endl;
     cout<<q->dequeue()<<endl;


     cout<<" front is : "<<q->front()<<endl;
     cout<<q->dequeue()<<endl;

     cout<<" front is : "<<q->front()<<endl;
     cout<<q->dequeue()<<endl;

     cout<<" front is : "<<q->front()<<endl;
     cout<<q->dequeue()<<endl;

    cout<<q->IsEmpty()<<endl;








    return 0;
}