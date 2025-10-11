#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std;

class graph{
 
 int V;
 list<int> *l;
public:

graph(int V){
    this->V=V;
    l= new list<int>[V];
}
void addedge(int u, int v){
  l[u].push_back(v); //directed u to v
//   l[v].push_back(u);
}
void print (){
    cout<<"no of vertices is "<<V<<endl;
    for(int i=0; i<V; i++){
        cout<< i<<":";
        for(int neigh:l[i]){
            cout<<neigh<<" ";
        }
        cout<<endl;
    }
}

void dfs(int curr, vector<bool> &vis, stack<int> & s){
   vis[curr]=true;
   for(int v: l[curr]){
    if(!vis[curr]){
    dfs(curr,vis,s);
   }
   
   }
   s.push(curr);
}
void toposort(){
    vector<bool>vis(V, false);
    stack<int>s;
    for(int  i=0; i<V; i++){
        if(!vis[i]){
            dfs(i, vis,s);
        }
    }
    while(s.size()>0){
        cout<< s.top()<< " ";
        s.pop();
    }
}


};
int main(){
graph g(4);
g.addedge(0,1);
g.addedge(1,2);
g.addedge(2,3);
g.addedge(3,1);
//  g.print();
 g.toposort();
}