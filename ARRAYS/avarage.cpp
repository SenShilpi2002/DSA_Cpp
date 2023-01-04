#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int sum=0;
    int avg;
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<9;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of the arry elements "<<sum<<endl;
    avg=sum/10;
    cout<<"The average of the array elements : "<<avg<<endl;
}