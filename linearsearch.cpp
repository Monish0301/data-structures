#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter element you want to search from 1 to 10 : " << endl;
    cin >> key;
    int pos = linearsearch(arr, n, key);
    if (pos != -1)
    {
        cout << "Element Present in array at index :" << pos << endl;
    }
    else
    {
        cout << "Element Not Present" << endl;
    }
    return 0;
}