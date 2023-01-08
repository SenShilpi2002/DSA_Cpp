#include<iostream>
using namespace std;
int main(){
    int num,flag=0;
    cout<<"Enter the number :";
    cin>>num;
    for(int i=0; i<num/2; i++){
        if(num==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"The number is prime ";
    }
    else{
        cout<<"The number is not prime ";
    }
    return 0;
}