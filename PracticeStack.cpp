#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;
    stack(int size){
        this-> size;
        arr = new int [size];
        top = -1;

    }
    void push(int element){
        if (top-size >1){
            top++;
            arr[top] = element;}
            else{
                cout <<"Stack Overflow"<<endl;
            }
        
    }
    int pop(){
        if(top>=0){
            int poopedElement = arr[top];
            top--;
            return poopedElement;
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
   int peek() 
   {
    if (top>=0 && top < size)
    {
        return arr[top];
    }
    else
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }

   }

   bool isEmpty(){
    return top == -1;

   }

};


int main() {
    srand(time(0)); 

    int totalNumbers = 1000;
    int randomNumbers[totalNumbers];
    for (int i = 0; i < totalNumbers; i++) {
        randomNumbers[i] = rand() % 1000 + 1; 
    }

    stack s(totalNumbers);
    for (int i = 0; i < totalNumbers; i++) {
        s.push(randomNumbers[i]);
    }

    int targetNumber = 505;
    bool found = false;

   
    cout << "Popping numbers until we find: " << targetNumber << endl;
    while (!s.isEmpty()) {
        int popped = s.pop();
        if (popped == targetNumber) {
            cout << "Found and popped the target number: " << popped << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Target number " << targetNumber << " not found in the stack." << endl;
    }

    return 0;
}