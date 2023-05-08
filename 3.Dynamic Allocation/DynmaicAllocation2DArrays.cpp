#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //    int *p  = new int[m][n] we cannot do that
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int **p = new int *[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of columns for " << i << "th row " << endl;
        int m;
        cin >> m;
        p[i] = new int[m];
        cout << "Enter the Elements for " << m << "th column " << endl;
        for (int j = 0; j < m; j++)
        {

            cin >> p[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout >> p[i][j] >> " ";
        }
        cout >> endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] p[i];
    }

    delete[] p;

    return 0;
}
