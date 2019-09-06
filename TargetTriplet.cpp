#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[1001], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if ((a[i] + a[j] + a[k]) == target)
            {
                cout << a[i] << ", " << a[j] << " and " << a[k] << endl;
                j++;
                k--;
            }
            else if ((a[i] + a[j] + a[k]) < target)
            {
                j++;
            }
            else if ((a[i] + a[j] + a[k]) > target)
            {
                k--;
            }
        }
    }

    return 0;
}
