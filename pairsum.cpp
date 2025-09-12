// #include <iostream>
// using namespace std;
// #include <vector>
// #include <limits.h>

// vector<int> pairsum(vector<int>vec,int target){
//     vector<int>ans;
//     int n =vec.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(vec[i]+vec[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }

//         }
//     }
   
// }
// int main(){
//     int target=6;
//     vector<int>vec={1,2,3,4};
//   vector<int>ans=pairsum(vec,target);
//   cout<<ans[0]<<ans[1];

    
   
   
// }

//////////////////////////////////////////////////////////////better approach
#include <iostream>
using namespace std;
#include <vector>
vector<int>pairsum(vector<int>vec, int target){
    vector<int>ans;
    int i=0;
    int j=vec.size();
while(i<j){
    int ps=vec[i]+vec[j];
    if(ps>target){
        j--;
    }
    else if(ps<target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }

}


}

int main(){
        int target=17;
        vector<int>vec={1,2,3,4};
      vector<int>ans=pairsum(vec,target);
      cout<<ans[0]<<ans[1];
}