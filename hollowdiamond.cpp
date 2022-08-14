/** 
        * 
       * * 
      *   * 
     *     *
    *       *
    *       * 
     *     *
      *   *
       * *
        * 
**/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "*" << ends;
            }
            else if (j == i)
            {
                cout << "*" << ends;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "*" << ends;
            }
            else if (j == i)
            {
                cout << "*" << ends;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}