/**        
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
 **/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;

    int iteration = 1;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= iteration; j++)
        {
            cout << "*" << ends;
        }
        cout << endl;
        iteration += 2;
    }
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (j = iteration-2; j >=1 ; j--)
        {
            cout << "*" << ends;
        }
        cout << endl;
        iteration -= 2;
    }
    return 0;
}