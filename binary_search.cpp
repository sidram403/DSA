// Binary_Search 
#include <iostream>
using namespace std;

int binary_search(int a[], int n, int key)
{
	int s = 0;
	int e = n - 1;
	while (s <= e)
	{
		int mid = (s + e) / 2;

		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[mid] > key)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int n, key;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "Enter a key value:";
	cin >> key;
	int output = binary_search(a, n, key);
	cout << key << " is present in at index: " << output << endl;

	return 0;
}

/*
OUTPUT:
  N=5
  1 4 5 6 3
  Enter a key value:5
  5 is present in at index: 2

*/