#include<iostream>
using namespace std;
#include<string>
#include<unordered_map>
#include<vector>


int main(){
    vector<int>arr={1,2,1,3,4,5,6,2,2,2,2,1};  unordered_map<int,int>count;
    int maxfreq=0; int maxans=0;
    for(int i=0; i<arr.size(); i++){
       count[arr[i]]++;
       maxfreq=max(maxfreq,count[arr[i]]);
    }

    for(int i=0; i<arr.size(); i++){
        if(maxfreq==count[arr[i]]){
            maxans=arr[i];
        }
    }
    cout<<maxans;
}