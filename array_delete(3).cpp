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
    cout << "Enter array size : ";
    cin >> s;
    int arr[s];
    cout << "Enter the elements one by one : " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "which element want to delete? " << endl;
    cin >> k;
    int inx = search(arr, s, k);
    if (inx != -1)
    {
        for (int i = inx; i < s - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        s--;
        cout << "After deleted element in array :" << endl;
        for (int i = 0; i < s; i++)
        {
            cout << arr[i] << endl;
        }
    }
    else
        cout << "Element not in array" << endl;
    return 0;
}