#include<iostream>
#include<queue>
using namespace std;
// In this file we see about inbuild Queue - in out last file we saw that how Ideal Queue is work & what is queue & in this file we see how inbuild
// queue is work inbuild queue work same as our last queue is work only you can see changes in function name let see how we are use Queue
// Our inbuild queue have some functions are listed below -
// 1.empty() - this funtion check queue is empty or not just same as our Isempty function
// 2.front() - this functon return first element of the queue same as our front functon
// 3.Push() - this function is insert element in the queue just like our enqueue() function
// 4.pop() - this function remove element using list in first out rule.

// to use unbuild queue we need to include <queue> header file and it is template so that you also need to specify its data-type means which type 
// of data are you insert in it - Queue<int>

int main()
{

    queue<int> q;
    q.push(10);
    q.push(20);

    cout<<q.front()<<endl;

    q.pop();

    q.pop();
    cout<<q.front()<<endl;


    return 0;
}