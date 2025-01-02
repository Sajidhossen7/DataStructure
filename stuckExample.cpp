#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void stackOperations() {
    stack<int> s;

    int arr[] = {3, 7, 6, 5, 4};
    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
        s.push(arr[i]);
    }
    cout << endl;

    cout << "Stack Operations:\n";
    s.pop();
    s.push(6);
    s.pop();
    s.push(11);
    s.pop();
    s.push(13);

    cout << "Final stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stackOperations();
    return 0;
}