#include<iostream>
using namespace std;

// In This File We Will See How Stack Is Made Using LinkedList. We Know Stack Right ? So, We Create Stack Using LinkedList Okey But First tell me 
// What is Linked-List ? Linked List is Nothing but it also linear data-structure to see more about Linkde List Please go to LinkedList File.
// Okey, Lets get Started We Know stack have some functions Using which we can manipulate or Using which only we can access store data.
// And Previously we talk about that in stack or in other data structure internally we store data in Array or in LinkedList so here we store data in
// Linkedlist. So first we see how linkedList store data internally and what are the advantages to store data in linkedList rather than the array
// *Linkedlist - linkedList store data in the form of nodes. okey but what are the advantages of using linkedList why we not use an array why ?
// In array we know that we need to give size before array is created and okey suppose i give size but when we insert element in the array and array
// reach its max limit we are not able to insert our next element in the array right ? yes if we do then we then we are lead to be in unathorised access
// and this is very dengeous so the biggest disadavantage of array is size problem to overcome this problem we have dynamic array okey but we know that
// for creation of dynamic array we also need to doing some stuff like create new array copy element of current array and then delete priviously array
// this is very crucial task but in Linkedlist we dont need to tell size here their is no issue of size because node are store internally in random
// fashion and we know that in array element are store in adjecent block that why size issue happen in array but so that why Linkedlist is better in
// size problem but there is a disadvantage of linked list that you cant do random accesing we should need to travel from first node to required node
// let se how we inpleament stack using linked list 
// 1. Nodes are the userdefine class. The data member of node is 1. T data 2. Node pointer okey. What is the work of each data memeber ? let see one by one
// a.T data - store data of current node b. Node Pointer store address of his next Node object if there is not next class then is should be null
// This is how node is created. Now let see about LinkedList
// LinkedList is nothing but collection of nodes ! okey Got it.
// so first we create Node Class 
template<typename T>
class Node{
 
 public:
    T data;    // here we declare data as template because we dont know which type of data is being store in our stack. Okey And you know about 
    // template right ? yes
    // Now we create a Node Pointer which store address of his next node.
    Node<T>* next;   //  And see here also we declare it as template because we dont know that which type of data is being store.

    // now we create an constructor 
    Node(T data)
    {
         this->data = data; // we initialise clas data with the constructor data 
         this->next = NULL; // and we initialise next with null beacuse we know one ideal node will be [data | NULL ]
    }


};
// Our Node is Created Now we create Stack class but we create stack using templete so for that we write okey but let discuss what will be needed
// to build stack class and what will be the function okey ! to create stack we keep head which is linkedlist starting node & one size variable 
// okey ! what about the functions as we know Ideal stack have 1.Isempty() 2.Top 3.Push 4.back functions so one we implements this functions
// let see how we implement this functions in the stack 

template <typename tt>
class StackUsingLL
{

// As we said we take head okey then we take T type head
Node<tt>* head;
// One size variable 
int size;

// constructor - In constructor we initialised all memeber of call
public:
StackUsingLL()
{
     head = NULL;  // why head is NULL ? beacause stack is empty until anyOne has not insert element in it. that why
     size = 0;    // why size is zero because initially there is no element present in the stack thats why this is 0.
}

// 1.IsEmpty() - this function return our stack is empty or not the return type of this function is bool okey ? But How it work ?
// We maintain a variable whose count element present in the stack so if size==0 then he return true alse he return false.

bool IsEmpty()
{
    return size==0;
}

//2.Top() - This function return top most element in the stack & you know top most element is removed first in the stack Okey but how it work
// first he check is it our stack is empty or not . If stack is empty then it return -1 else he return tail data.

tt Top()
{
       if(IsEmpty())
       {
          cout<<" stack is Empty "<<endl;
          return -1;
       } else {
           
           return head->data;
       }
}

// 3.Push() - Push() function push element in the stack using FILO rule okey how it work ? first he check that if head & tail are both null then
// he create new Node and initilise it else both are not null then he create new node and put nextnode address into tail node.
void push(tt element)
{
     if(head==NULL)
     {
         Node<tt>* newNode = new Node<tt>(element); // here see we create new node using new keyword.
         // Now we point this new node with the head.
         head = newNode;
         // and here first element is insert in our stack then we do size++
         size++;
     } else {
         
         // else we create an newNode 
         Node<tt>* newNode = new Node<tt>(element);
         // and we insert it address to the tail next & update tail.
         newNode->next = head;
         head = newNode;
         // now one another element is inserted in our stack that why we do size++;
         size++;
     }
}

// 4.Pop() - pop() function is responsible for the remove element from the stack okey you know in array we do logical deletion but in LL we do 
// physical deletion ! okey How this function work 1. first we check is it this stack is empty or not using Isempty() function if find empty then
// he display massege " stack is empty " and return -1 else he go to the LL create temp node and store head in it then we update head = head->next
// and delete the temp and return head data

tt Pop()
{
      if(IsEmpty())
      {
          cout<<" stack is empty "<<endl;
          return -1;
      } else {
           
           tt var = head->data;
           Node<tt>* temp = head;
           head = head->next;
           delete temp;
           return var;
      }
}
     
};



int main()
{
    
    StackUsingLL<int> s;

    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<" top is : "<<s.Top()<<endl;

    cout<<" remove : "<<s.Pop()<<endl;

    cout<<" top is : "<<s.Top()<<endl;
    
    return 0;
}

// This is how Ideal stack is work in our system finally we get Ideal stack thank you In next file we will se Inbuild stack 
