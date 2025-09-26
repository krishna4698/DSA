#include<iostream>
using namespace std;

class Stack{
    int * arr;
    int capacity;
    int top;
public:
    Stack(int size){
        capacity=size;
        arr= new int[capacity];
         top=-1;
        
    }

    void push(int val){
        if(top==capacity-1){
            cout<<"stack full"<<val<<endl;
            return;
        }
        arr[++top]=val;
    cout<<"pushed to stack"<<val<<endl;
    }
    void pop(){
        if(top==-1) {
            cout<<"stack empty"<<endl;
            return;
        }
        cout<<arr[top--];
    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    void print(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<"->";
    }
    
    }

};

int main(){
    Stack s(5);

    s.push(10);
    s.push(2);
    s.push(3);
    s.push(4);
s.print();
     
    // cout<<s.peek(); 

}