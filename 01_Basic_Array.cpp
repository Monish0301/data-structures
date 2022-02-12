#include <iostream>
using namespace std;

int main()
{
    int marks[100] = {0};
    int n;
    cout << "Enter no of Students :";
    cin >> n;
    marks[0] = -1;

    for (int i = 1; i <= n; i++)
    {
        cin >> marks[i];
        marks[i] = marks[i] * 2;
    }

    for (int i = 0; i <= n; i++)
    {
        cout << marks[i] << ",";
    }
    cout << endl;
    return 0;
}