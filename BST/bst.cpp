#include <iostream>
using namespace std;
#include<vector>


class node{
    public:
    int data;
    node* left;
    node* right;
    node(int  val){
        data=val;
        left=right=NULL;

    }
};

node*insert(node*root,int val){
if(root==NULL) { 
    return new node(val);
}
if(val< root->data){
     root->left= insert(root->left,val);
}
else{
    root->right=insert(root->right,val);
}
return root;
}

node*Buildbst(vector<int>arr){
    node*root=NULL;
    for(int val:arr){
      root=  insert(root,val);
    }
    return root;
}
void inorder(node*root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);  

}

// Search in Tree

bool search(node*root,int key){
    if(root==NULL) return false;
    if(root->data==key) return true;
        if(root->data>key){ 
         return  search(root->left,key);
        }
        else{
            return  search(root->right,key);
        }
}

int main(){
vector<int>arr={ 3,2,1,5,6,4};
node*root=Buildbst(arr);
// inorder(root);
// cout<<endl;
cout<<search(root,33);

}