#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int temp;
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The new sorted arry is : "<<" ";
    for(int j=0;j<10;j++){
        cout<<arr[j];
    }
}

