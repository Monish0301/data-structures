#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag++;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int arr[] = {20, 10, 30, 60, 15, 5, 35, 50, 40};
    int n = sizeof(arr) / sizeof(int);
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}