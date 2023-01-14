#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, x, temp, j;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> a;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; n++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (a[j] >= temp && j >= 0)
        { // if this condition will be not true then we doestn't enter the loop...see 22 no. line
            a[j + 1] = a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"The sorted array is like : ";
    for(i=0;i<n;i++){
        cin>>a[j];
    }
    return 0;
}