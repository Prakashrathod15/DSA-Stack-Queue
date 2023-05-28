#include<iostream>
#include<stack>
using namespace std;
int main()
{

    // In this file we will see how inbuild stack is used so for using inbuild stack we have stack header file so if we need to use inbuild stack
    // then we need to include stack header file. Okey So but which type of data insert in the inbuild stack ? any-type of data you can insert into
    // the stack as you because inbuild stack is create using templates as you can you can use e.g
    // 1. If you want to your stack of int data-type then you will write like this
    stack<int> Number;  // like this 
    // 2. If you want to your stack is of char type then you will write like this 
    stack<char> ch; // & so on remember typename in template yeah got it so this <int> act like typename okey Uderstood. Okey our stack is created
    // How Am i insert data in stack ! let see for now we take interger stack Number.

    // 1.data Insert in the stack - for inserting data what we use - Push() same here we use push function

    Number.push(10);
    Number.push(20);
    Number.push(30);  // so our stack become 30
                      //                     20
                      //                     10

    // 2.How I will see element of stack - See you cant see all element of stack because stack is restricted. You can see top element of stak 
    // so for top seeing last element of stack we have top() function which return you element present the top of the stack

    cout<<Number.top()<<endl;

    // Here you can we top == 30 because stack fallow LIFO rule.

    // 3.How i remove element from the stack - you can remove top most element in the stack for that we have Pop() function which only remove element
    // from the stack 

    Number.pop();

    cout<<Number.top()<<endl; // Now you will see 20 as result 

    // 4. Check stack empty or not for that we have empty function which return true or false for you if stack is empty then he return true else he 
    // return false

    cout<<Number.empty()<<endl;


    // So this How stack is work thank you !


    return 0;
}