#include<iostream>
using namespace std;

int main()
{
    int sajid[9] = {1, 2, 3, 4, 5, 1, 3, 4, 5};
    int n;
    cout << "Enter the number to be found: ";
    cin >> n;
    int i;
    int count=0;
    for (i=0;i<9;i++)
    {
        if ( n == sajid[i]){
            count++;
            
        }

    }
    cout<< n << " was" << count<<" times  found in the array "<<i<<" of index" << endl;

    return 0;
}
