#include<iostream>
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
     int idx=-1;
    node*buildtree(vector<int>preorder){
        idx++;
        if(preorder[idx]==-1) return NULL;

        node*root=new node(preorder[idx]);
        root->left=buildtree(preorder);
        root->right=buildtree(preorder);
        return root;
    }


    void kthLevelorder(node*root, int k){
  if(root==NULL) return ;
  if(k==1){
    cout<<root->data<< " ";
    return;
  }
  kthLevelorder(root->left,k--);
  kthLevelorder(root->right, k--);
    }



    int main(){
        vector<int> preorder = {
    1, 2, 4, 8, -1, -1, 9, -1, -1,
    5, 10, -1, -1, -1,
    3, 6, -1, -1, 7, -1, -1
};
        node*root=buildtree(preorder);
        kthLevelorder(root,3);
 
    
    }