#include<iostream>
using namespace std;
#define n 100
class stack{
    public:
    int* arr;                      //declaration
    int top;

    stack(){                    //constructor portion
        arr=new int[n];
        top=-1;
    }

    //push operation

   void push(int x){
    if(top==n-1){
        cout<<"Stack is overflow"<<endl;
    return ;
    }
    top++;
    arr[top]=x;

   }

   //pop operation

   void pop(){
    if(top==-1){
        cout<<"Stack is underflow"<<endl;
        return;
    }
    top--;
   }


   //checking top element

    void top(){
        if(top==-1){
            cout<<"No elements in Stack"<<endl;
            return -1;
        }
        return arr[top];
       
    }

    //emty funtion

    bool empty(){
        return top==-1;
    }
};    




int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

}



