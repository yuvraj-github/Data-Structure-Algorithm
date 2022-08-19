#include <iostream>
using namespace std;

int main()
{
    int n, i, j, insertPosition;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n; i++)
    {
        int current = arr[i];
        insertPosition = i;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                insertPosition = j;
                arr[j + 1] = arr[j];
            }
        }
        arr[insertPosition] = current;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ends;
    }
    return 0;
}