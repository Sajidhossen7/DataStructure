#include<iostream>
using namespace std;

void printArray(int arr[], int size) 
{
    for (int i= 0; i<size; i++)
    {
        cout<< arr[i] << "  " ; 
    }
    cout<<"DONE "<<endl;
}

int main()
{
    //declair
    int number[15];
    //accessing an array
    cout << "value at 14 index " << number[14] << endl;
    //inilitalising an array 
    int second[3] = {5, 7, 11};

    //accesing an element
    cout << "Value at 2 index " << second[2] << endl;
    int third[15] = {2,7};
    
   printArray(third, 15);



    int fourth[10]={0};
  
    printArray(fourth, 15);

     int fifth[20]={1,2,3,4,5,6,7,7,8,8,5,4,43,2,3,};
  
    printArray(fifth, 15);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"size of fifthe is"<< fifthSize <<endl;





}