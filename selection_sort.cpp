// Selection_Sorting
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}

		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	selection_sort(a, n);

	return 0;
}