#include<iostream>
#include<queue>
using namespace std;

void queueOperations() {
    queue<int> q;

    int arr[] = {3, 7, 6, 5, 4};
    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
        q.push(arr[i]);
    }
    cout << endl;

    cout << "Queue Operations:\n";
    q.pop();
    q.push(6);
    q.pop();
    q.push(11);
    q.pop();
    q.push(13);

    cout << "Final queue (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queueOperations();
    return 0;
}