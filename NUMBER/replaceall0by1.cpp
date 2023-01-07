#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the num : ";
    cin>>num;


    string str=to_string(num);
    for( int i=0;i<str.size;i++){

        if(str[i]=='0'){
            str[i]='1';
        }
    }
    cout<<stoi(str);
}