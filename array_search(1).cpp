#include <iostream>
using namespace std;

int search(int arr[], int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == k)
            return i;
    }
    return -1;
}
int main()
{
    int s, k;
    cout << "Enter array size :" << endl;
    cin >> s;
    int arr[s];
    cout << "Enter the elements one by one " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Search element" << endl;
    cin >> k;
    int pos = search(arr, s, k);
    if (pos == -1)
        cout << "Element not found";
    else
        cout << "The element is found and position : " << pos;
    return 0;
}