#include<iostream>
using namespace std;
#include<vector>

int merge(vector<int>&arr,int mid , int low, int high){
    vector<int>temp;
    int count=0;
    int i=low; int j =mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            count+=mid-i+1;
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
            i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
            count+=mid-i+1;
            j++;
    }
    for(int idx=0; idx<temp.size(); idx++){
        arr[idx+low]=temp[idx];
    }
    return count;
}
int mergesort(vector<int>&arr , int low, int high){
  while(low<high){
    int mid=low+(high-low)/2;
     int rightinv=mergesort(arr,low,mid);
     int leftinv=mergesort(arr,mid+1,high);
     int inv=merge(arr,mid,low,high);
     return leftinv+rightinv+inv;
  }
  return 0;
}
int main(){
vector<int>arr={5,4,2,1};
int ans=mergesort(arr,0,arr.size()-1);
cout<<ans;
}