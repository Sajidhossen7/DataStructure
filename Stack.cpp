#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //creattion stack
    stack<int> s;


    //push Stack
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);

    //pop
    s.pop();
    s.pop();
    

    cout<<"Printing top of the element "<< s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }
    cout<<"size of stack "<<s.size()<<endl;

    return 0;


}