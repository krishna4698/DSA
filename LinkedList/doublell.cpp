#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;

   node(int val){
      data=val;
      next=prev=NULL;
      }
};
class doublell{
    node*head;
    node*tail;
    public:
    doublell(){
       head=tail=NULL;  
    }
   
}; 
int main(){
    doublell l1;
    
}