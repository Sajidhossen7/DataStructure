#include<iostream>
using namespace std;

class stack{

    public:
    int size;
    int *arr;
    int top;

    stack(int size){
        this-> size=size;
        arr = new int[size];
        top = -1;
    
    }
    void push(int element){
        if(size - top > 1){
        top++;
        arr[top] = element;
        }
        else {
            cout<<"stack overflow"<< endl;
        }

    }
    void pop(){
        if (top >= 0){
            top--;
        }
        else{
            cout<<"stack is empty"<< endl;
        }

    }
    int peek(){
        if (top >= 0 && top<size ){
             return arr[top];
             }
             else {
                cout<<"stack is Empty"<<endl;
                return -1;
             }

    }
    bool isEmpty(){
        if (top == -1){
            return true;
        }
        else {
            return false;
        }

    }

};
int main() {
    stack s(10);
    s.push(11);
    s.push(23);
    s.push(13);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek() << endl;
    return 0;
}