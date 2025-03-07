#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter a Row:" << endl;
    cin >> m;

    cout << "Enter a Col:" << endl;
    cin >> n;

    int* arr = new int[m];
    int** Arr2d = new int*[m];
    int*** Arr3d = new int**[m];

  
    //1D Array
    for (int i = 0; i < m; i++)
    {
        arr[i] = i * 2;
    }

    //2D Array 
    for (int i = 0; i < m; i++)
    {
        Arr2d[i] = new int[5];
    }

    //2D Array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Arr2d[i][j] = i + j;
        }
    }

 
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Arr2d[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
    delete[] Arr2d;
    return 0;
}
