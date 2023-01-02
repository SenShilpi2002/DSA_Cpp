#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int i;
    int p1=0,p2=9;
    cout<<"Enter the array elements "<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}