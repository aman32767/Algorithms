#include <iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[20], c[20];
    int left_max = a[0];
    int right_max = a[n - 1];
    for (int i = 0, k = n - 1; i < n; i++, k--)
    {
        for (int j = i; j >= i; j--)
        {
            if (a[j] >= left_max)
            {
                left_max = a[j];
                b[i] = left_max;
            }
            else
            {
                b[j] = left_max;
            }
        }
        for (int j = k; j < n; j++)
        {
            if (a[j] >= right_max)
            {
                right_max = a[j];
                c[k] = right_max;
            }
            else
            {
                c[k] = right_max;
            }
        }
    }
    int ans;
    int final_ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=min(b[i],c[i])-a[i];
        final_ans=final_ans+ans;
    }
    cout<<final_ans;
    return 0;
}
