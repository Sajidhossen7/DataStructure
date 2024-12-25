#include<iostream>
using namespace std;

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
    int n = 10;
    cout <<"printing the array" <<endl;
    for(int i = 0; i<n; i++){
        cout << third[i] <<" "<<endl;
    }
    int fourth[10]={0};
    n = 10;
    cout<<"Printig the array"<<endl;
     for(int i = 0; i<n; i++){
        cout << fourth[i] <<" ";
     }




}