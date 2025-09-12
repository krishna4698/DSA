#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){
    stack<int>s;
    vector<int>arr={4,8,5,2,25}; 
    vector<int>ans(arr.size());

    
    for(int i=arr.size()-1; i>=0; i--){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
        
    }

    for(int i=0; i<ans.size(); i++){
       cout<< ans[i] << " " ;
    }
 
return 0;
}