#include<iostream>
using namespace std;
 #include<vector>
 #include<unordered_map>
 #include<algorithm>

int main(){
vector<int>nums= {1,1,1,2,2,3}; int k = 2; //return k most frequent elements
 unordered_map<int,int>m;
    for(int i=0; i<nums.size(); i++){
        m[nums[i]]++;
    }
     vector<pair<int,int>>vec(m.begin(),m.end());
     sort(vec.begin(),vec.end(),[](auto a ,auto b){
        return a.second>b.second;
     });
     vector<int>ans;
     for(int i=0; i<k; i++){
           ans.push_back(vec[i].first);
           
     }
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i];
   }

}