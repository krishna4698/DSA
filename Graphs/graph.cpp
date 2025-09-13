#include<iostream>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int V){
   this->V=V;
    l=new list<int>[V];
    }
     
    void addedge(int u, int v){
       l[u].push_back(v);
       l[v].push_back(u);
    }
    void print(){
for(int i=0; i<V; i++){
    cout<< i<<":";
    for(int neigh:l[i]){
        cout<< neigh<< " ";
    }
cout <<endl;
}
    }

    void bfs(){
        queue<int>q;
        vector<bool>visted(V,false);
        q.push(0);
        visted[0]=true;
        while(q.size()>0){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v: l[u]){
                if(!visted[v]){
                    visted[v]=true;
                    q.push(v);
                }
            }
        }
    }
    //DFS Traversal

    void dfshelper(int u,vector<bool>& vis){
        cout<< u<<" ";
        vis[u]=true;
          for(int v:l[u]){
            if(!vis[v]){
                dfshelper(v,vis);
            }
          }
    }
    void dfs(){
        int src=0;
        vector<bool>vis(V,false);
        // dfshelper(src,vis);

        // if there is multiple graphs or we can say that disconnrected graphs
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfshelper(src,vis);
            }
        }
        /////
    }
    
   
};

int main(){
  
    Graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1,3);
    // g.addedge(2,3);
    g.addedge(2,4);
    // g.bfs();
    g.dfs();
    // g.print();

}