#include <iostream>
using namespace std;
int inputArray(int a[][10], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> a[i][j];
        }
    }
    return 0;
}
int outputArray(int a[][10], int R, int C)
{

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
int mirrorRotation(int a[][10], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i != j && i > j)
            {
                int temp;
                temp = a[j][i];
                a[j][i] = a[i][j];
                a[i][j] = temp;
            }
        }
    }
    cout << endl;
    int temp;
    for (int row = 0; row < R; row++)
    {
        for (int i = 0, j = C - 1; j > i; j--, i++)
        {
            temp = a[row][i];
            a[row][i] = a[row][j];
            a[row][j] = temp;
        }
    }
}
int main()
{
    int a[10][10];
    int r, c;
    cin >> r;
    cin >> c;
    inputArray(a, r, c);
    outputArray(a, r, c);
    mirrorRotation(a, r, c);
    outputArray(a, r, c);
    return 0;
}