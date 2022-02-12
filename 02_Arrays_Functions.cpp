#include <iostream>
using namespace std;

void print_array(int arr[], int n)
{
    cout << "Inside Function\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    print_array(arr, n);

    cout << "Inside Main\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}