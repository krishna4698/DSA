#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


       bool isvalid(vector<int>arr, int n, int c, int minimumdistance){
        int cows=1 ,laststallpos=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]-laststallpos>=minimumdistance){
                cows++;
                laststallpos=arr[i];
            }
            if(cows==c){
                return true;
            }
        }
        return false;
       }

     int aggresivecows(vector<int>arr, int n, int c){
        sort(arr.begin(),arr.end());
         int ans=0;
        
         int st=arr[0]; int end=arr[n-1];
         while(st<=end){
            int mid=st+(end-st)/2;
            if(isvalid(arr,n,c,mid)){
                  ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }
         }
         return ans;
   }

int main(){
    vector<int>arr={1,2,8,4,9};
      int n=5;
      int c=3;
      int ans=aggresivecows(arr,n,c);
      cout<<ans;
}