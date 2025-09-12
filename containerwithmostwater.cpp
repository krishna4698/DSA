#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>
int main(){
    int height[9] = {1,8,6,2,5,4,8,3,7};
    int ans=0;
    for(int i=0; i<9;i++){
    for(int j=i+1; j<9; j++){
     int width=j-1;
      int length =min(height[i],height[j]);
      int area=width*length;
      ans=max(ans,area);
      
    

     }
    
   
    }
    return ans;
   cout<<ans;
   
}