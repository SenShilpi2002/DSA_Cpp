#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, j;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> a;
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            swap(a[i], a[min]);
        }
    }
    cout << "The new sorted array is : ";
    for (i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    return 0;
}
