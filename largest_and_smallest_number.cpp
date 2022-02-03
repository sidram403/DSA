// Smallest And Largest Number

#include <iostream>
#include <climits>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> a[i];
	}

	int largest = INT_MIN;
	int smallest = INT_MAX;

	for (int i = 0; i < n; i++)
	{

		largest = max(largest, a[i]);
		smallest = min(smallest, a[i]);
	}
	cout << "largest:" << largest << endl;
	cout << "smallest:" << smallest << endl;

	return 0;
}

/*
OUTPUT:
 N=5
 10 40 50 60 70
 largest:70
 smallest:10
       
 
*/