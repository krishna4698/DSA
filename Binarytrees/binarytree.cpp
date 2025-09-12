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
    void Preorder(node*root){
        if(root==NULL) return ;
        cout<<root->data;
        Preorder(root->left);
        Preorder(root->right);
    }
    void inorder(node*root){
        if(root==NULL) return ;
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
 void postorder(node*root){
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;

 }
// height of tree4
int height(node*root){
    if(root==NULL) return 0;
    int leftht=height(root->left);
    int rightht=height(root->right);
    return max(leftht,rightht)+1;
}
//count nodes
int count(node*root){
    if(root==NULL) return 0;
    int leftcount=count(root->left);
    int rightcount=count(root->right);
    return leftcount+rightcount+1;
}
//sum of nodes
int sum(node*root){
    if(root==NULL) return 0;
    int rightsum=sum(root->right);
    int leftsum=sum(root->left);
    return rightsum+leftsum+root->data;
}

int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
      node*root=buildtree(preorder);
    //   Preorder(root);
    //   inorder(root);
    //   postorder(root);
    cout<<"height="<<height(root);
    // cout<<"count="<<count(root);
    // cout<<"sum of nodes="<<sum(root);


    
   
}