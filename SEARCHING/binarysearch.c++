#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mid, i, n, x, start, end, key;
    cout << "Enter the size :";
    cin >> n;
    vector<int> a;
    cout << "Enter the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cout << "Enter a value : ";
    cin >> key;
    start = 0;
    end = n - 1;
    mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == key)
        {
            cout << "found at " << mid;
            break;
        }
        // go to right
        else if (key > a[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}
