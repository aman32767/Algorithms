#include <iostream>
#include<algorithm>
using namespace std;
bool inIt(int a[], int t, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == t)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int n, target;
	cin >> n;
	int first, second;
	int a[1001];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> target;
    sort(a,a+n);
	for (int i = 0; i < n/2 ; i++)
	{
		if (inIt(a, (target - a[i]), n))
		{
			first = a[i];
			second = target - a[i];
            if(first<second)
            {
			cout <<first<<" and "<<second;
            }else if(second<first){
                cout <<second<<" and "<<first;
            }
		}
		cout << endl;
	}

	return 0;
}
