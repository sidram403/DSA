//Inbuilt_Sorting
#include <bits/stdc++.h>
using namespace std;

// comparator function
bool compare(int a, int b)
{
    // for decending order sorting a>b
    return a < b;
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
    // inbuilt sorting function
    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}