#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

   node(int val){
      data=val;
      next=NULL;
      }
};
class list{
    node*head=NULL;
    node*tail=NULL;
    public:
    void pushfront(int val){  //o(1)
        node* newnode= new node(val);
        if(head==NULL){
          head=tail=newnode;
          return;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
  
    void pushback(int val){ //O(1)
    node* newnode=new node( val);
    if(head==NULL){
        head=tail=newnode;
        return ;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
  }

  void popfront(){  // O(!)
    if(head==NULL){
        cout<<"somew=thing went wrong";
    }
    else{
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
   }
    
   void popback(){    // O(n)
     if(head==NULL){
        cout<<"ll is empty";
     }
     else{
        node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
          delete tail;
          tail=temp;
     }

   }
  

   void insert(int val,int pos){   //O(N)
    if(pos<0){
        cout<<"wrong";
    }
    if(pos==0){
         pushfront(val);
        return ;
    }
      node*temp=head;
    for(int i=0; i<pos-1; i++){
        if(temp==NULL){
            cout<<"invalid position";
            return;
        }
      temp=temp->next;
    }
    node*newnode=new node(val);
    newnode->next=head->next;
    head->next=newnode;
   }
   
   int serach(int key){ //O(n)
    node*temp=head;
    int id=0;
    while(temp!=NULL){
        if(temp->data==key){
            return id;
        }
        temp=temp->next;
        id++;
    }
    return -1;
   }
   
   void printll(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

 
};

int  main(){
    list ll;
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    // ll.pushback(4);
    // ll.pushback(5);
    // ll.popfront();
    // ll.popback();
    ll.insert(4,0);
    ll.serach(4);
    ll.printll();
}