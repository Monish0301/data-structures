#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
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
    int pos = binarysearch(arr, n, key);
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