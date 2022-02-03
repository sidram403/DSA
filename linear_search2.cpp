//  Linear_Search_Problem

#include <iostream>
using namespace std;

int main()
{

	int n, i;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> a[i];
	}
	int key;
	cout << "Enter a key value which you want to search:";
	cin >> key;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			cout << key << " is present with " << i << " index" << endl;
			break;
		}
	}
	if (i == n)
	{
		cout << key << " value is not present" << endl;
	}

	return 0;
}


/*
output:
 N=5
 1 2 3 4 5
 Enter a key value which you want to search:3
 3 is present with 2 index
*/