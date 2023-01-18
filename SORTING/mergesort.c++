#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, a, lb, ub, mid, j, k;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> s;
    cout << "Enter the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        s.push_back(x);
    }
    merge(a, lb, mid, ub);
    {
        i = lb;
        j = mid + 1;
        k = lb;
        while (i <= mid && j <= ub)
        {
            if (a[i] <= a[j])
            {
                b[k] = a[i];
                i++;
            }
            else
            {
                b[k] = a[j];
                j++;
            }
            k++;
        }
        if (i > mid)
        {
            while (j <= ub)
            {
                b[k] = a[j];
                j++;
                k++;
            }
        }
        else
        {
            while (i <= mid)
            {
                b[k] = a[i];
                i++;
                k++;
            }
        }

        /*if (lb < ub)
        {
            mid = (lb + ub) / 2;
            mergesort(a, lb, mid);
            mergesort(a, mid + 1, ub);
            mergesort(a, lb, mid, ub);
        }*/
    }

    return 0;
}