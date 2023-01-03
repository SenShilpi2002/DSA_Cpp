#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int temp[7];
    int k,i,j=0;
    cout<<"Enter the element to rotate : "<<endl;
    cin>>k;
    cout<<"Enter the array elements : "<<endl;
    for(i=0;i<7;i++){
        cin>>arr[i];
    }
    for(i=k;i<7;i++){
        temp[j]=arr[i];
        j++;
    }
    for(i=0;i<k;i++){
        temp[j]=arr[i];
        j++;
    }
    cout<<"The right rotated array is : "<<endl;
    for(j=0;j<7;j++){
        cout<<temp[j]<<" ";
    }
    
   
}