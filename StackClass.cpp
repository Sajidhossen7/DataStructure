#include<iostream>
#include<stack>
using namesapace std;
class Stack
{
    private:
    int s[max_size];
    int top;

    public:
    stack() : top(-1){}
    bool push(int value)
    {
        if (top >= max_size -1)
        {
            cout<<"cannot push "<< value << endl;
            return false;
        }
        s[++top] = value;
        cout<<"pushed : "<< value << endl;
        return true;
    

    }
    bool pop(int &value)
    {
        if(top<0)
        cout<<"can not pop"<<endl;
        return false;
    }
    value = s[top--];
    cout<<"poped : "<< value <<endl;
    return true;


}
