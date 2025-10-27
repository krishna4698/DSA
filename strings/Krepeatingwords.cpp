#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
vector<string>words={"i","love","leetcode","i","love","coding"};
int k=2; //need to find k repeating words and in lexographical order
unordered_map<string,int>m;
for(int i=0; i<words.size(); i++){
  m[words[i]]++;
}
vector<pair<string,int>>vec(m.begin(),m.end());
sort(vec.begin(), vec.end(),[](const auto &a, const auto&b){
    if(a.second==b.second)  return a.first<b.first;
    return a.first>b.first;
});
vector<string>ans;
for(int i=0; i<k; i++){
    ans.push_back(vec[i].first);
}
for(int i=0; i<ans.size(); i++){
    cout<<ans[i];
    cout<<endl;
}


 
}

