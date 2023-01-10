#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,x;
    vector<int>a;
    cout<<"Enter the size ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
cin>>x;
a.push_back(x);
    }

    sort(a.begin(),a.end());


    for( auto it : a)
    {
        cout<<it<<" ";
    }
    

    return 0;
}