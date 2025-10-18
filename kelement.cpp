#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a ={2,3,7,6};
    vector<int>b ={1,9,11,8}; int k=6;
    int i=0; int j=0;  int count=0;
    while(i<a.size() && j<b.size()){
        int val;
        if(a[i]<=b[j]){
            val=a[i++];
        }
        else{
            val=b[j++];
        }
        count++;
        if(k==count){
             cout<<val;
             break;
        } 
    }
    while(i<a.size()){
        count++;
        if(k==count) cout<<a[i];
        break;
        i++;
    }
    while(j<b.size()){
        count++;
        if(k==count) cout<<b[j];
        break;
        j++;
    }
    return 0;
}