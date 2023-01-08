#include<iostream>
using namespace std;
int main(){
    int num,digit;
    int fac=1,sum=0;
    int temp;
    cout<<"Enter the number : ";
    cin>>num;
    temp=num;
    while(num!=0){
        digit=num%10;
        for(int i=1;i<=digit;i++){
        fac=fac*i;
        }
    sum=sum+fac;
    num=num/10;
    }
    if(sum==temp)
        cout<<"it is a strong number ";
    
    else
        cout<<"not strong number ";
    
    return 0;
}





  