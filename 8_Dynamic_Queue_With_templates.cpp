#include<iostream>
using namespace std;

// In last file we saw that How Queue is made Using array.But please answeer my one questions 1.the inbuild or Ideal queue have ever ask you for size ?
// No not at all. Okey and In Inbuild queue we insert data any type of data as we want but in last file we are able to insert only integer data right
// so in this file we resolve this 2 issue we make a queue in a such a way that user not tell size of an queue he insert data in queue as hw want
// and we also do one another thing is that we we create as queue in a such way that user insert anytype of data in it. Okey But How we do this ?
// To solve size issue we use convert our array into dynamic array I think you know what is dynamic array if not then see we create array befoe that
// we need to give size for the array but in dynamic array intially we give a very small size & if array is filled fully then internally array create 
// new array of double of size of privious array copy all element of privious array into new array then he delete privious memory block and start
// pointing with new array thats how dynamic array is work. so to solve our qeueue size issue we use dynamic array instead of using simple array
// to for second issue we use temples so lets start

template <typename t>

class DyanamicQueue
{
    t* data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;

    public:

        DyanamicQueue()
        {
             data = new t[5];
             firstIndex = -1;
             nextIndex = 0;
             size  = 0;
             capacity = 5;
        }

        bool IsEmpty()
        {
            return size==0;
        }

        t front()
        {
            if(IsEmpty())
            {
                cout<<endl;
                cout<<" Queue is empty "<<endl;
                return -1;
                cout<<endl;
            } else{

                   return data[firstIndex]; 

            }
        }

        void enqueue(t element)
        {
            if(size==capacity)
            {
                // steps 
                // 1.create new array 
                t *newarray = new t[capacity*2];

                // 2.copy all element start from front to capacity 
                   int j = 0;
                  for(int i = firstIndex ; i<capacity; i++)
                  {
                      newarray[j] = data[i];
                      j++; 
                  }

                //3.copy 0 index to firstindex
                 for(int i = 0; i<firstIndex; i++)
                 {
                       newarray[j]  = data[i];
                 }

                 //4. delete privious array
                 delete[]  data;

                 // resets all 
                 firstIndex = 0;
                 nextIndex = capacity;
                 capacity *= 2;

                 //point newarray

                 data = newarray;
                
            } 

                data[nextIndex] = element;
                nextIndex = (nextIndex+1)%capacity;
                size++;
            

            if(firstIndex==-1)
            {
                firstIndex = 0;
            }
        }

        t dequeue()
        {
              if(IsEmpty())
              {
                  cout<<endl;
                  cout<<" Queue is empty "<<endl;
                  cout<<endl;
              } else 
              {
                   t element  = data[firstIndex];
                   firstIndex = (firstIndex+1)%capacity;
                   size--;
                   return element;
              }

              if(size==0)
              {
                 firstIndex = -1;
                 nextIndex = 0;
              }
        }
};

int main()
{

  DyanamicQueue<int>* q = new DyanamicQueue<int>();

  cout<<q->IsEmpty()<<endl;

  cout<<q->front()<<endl;

  q->enqueue(10);
  q->enqueue(20);
  q->enqueue(30);
  q->enqueue(40);


  cout<<q->front()<<endl;
  cout<<q->dequeue()<<endl;
  cout<<q->front()<<endl;

  q->enqueue(50);
   
   cout<<q->dequeue()<<endl;
   cout<<q->dequeue()<<endl;
   cout<<q->dequeue()<<endl;

  cout<<q->front()<<endl;
   
   cout<<q->dequeue()<<endl;

   cout<<q->front()<<endl;




// this is Ideal Queue. this act like same as inbuild queue ......thank you ! 





    return 0;
}
