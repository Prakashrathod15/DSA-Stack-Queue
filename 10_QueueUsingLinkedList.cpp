#include<iostream>
using namespace std;
// In this file use see how queue is create using linkedList - we use same structure as we had did only change happening here is that we use 
// linkedlist instead of using array
template<typename t>
class node
{
    public:
    t data;
    node<t>* next;
       
       
         node(t var)
         {
             data = var;
             next = NULL;
         }
};

template <typename v>
class queue
{
    public:
   node<v>* head;
   node<v>* tail;
   int size;

       queue()
       {
          head =  NULL;
          tail =  NULL;
          size =  0;
       }

    bool IsEmpty()
    {
        return size==0;
    }

    v front()
    {
         if(IsEmpty())
         {
             cout<<endl;
             cout<<" Queue is empty "<<endl;
             return 0;
         } else {
             
             return head->data;
         }
    }

    void enqueue(v element)
    {
        node<v>* newnode = new node<v>(element);

        if(head==NULL)
        {
            head = newnode;
            tail = newnode; 
        } else 
        {
            tail->next = newnode;
            tail = newnode;
        }
         
        size++;
         
    }

    v dequeue()
    {
         if(IsEmpty())
         {
            cout<<endl;
            cout<<" queue is empty "<<endl;
            return -1;
         } 
    

    node<v>* temp = head;
    head = head->next;
    size--;
    return temp->data;
    }
};

int main()
{

  queue<int>* q = new queue<int>();

  q->enqueue(10);
  cout<<q->front()<<endl;

  q->enqueue(20);
  q->enqueue(30);

  cout<<q->dequeue()<<endl;
  cout<<q->dequeue()<<endl;
  cout<<q->dequeue()<<endl;

  cout<<q->dequeue()<<endl;










    return 0;
}