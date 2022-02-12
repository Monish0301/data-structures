#include <iostream>
using namespace std;
int main()
{
    int s, val, p, pos;
    cout << "Enter array size : ";
    cin >> s;
    int arr[s];
    cout << "Enter the elements one by one : " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position : " << endl;
    cin >> pos;
    cout << "Enter value  : " << endl;
    cin >> val;
    for (int i = s + 1; pos < i; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    cout << "After Inserted Array" << endl;
    for (int i = 0; i < s + 1; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}