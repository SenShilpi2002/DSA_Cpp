#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation of stack
    stack<int> s; //making stack we can use this function

    //push operation
    s.push(2);// push function
    s.push(3);
    //pop
    s.pop();//pop function
    cout<<"printing top element "<<s.top()<<endl;

    if(s.empty()){//empty function to cheak the stack is empty or not.....
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }


    return 0;

}