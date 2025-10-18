#include <iostream>
using namespace std;
#include <vector>

  
int binarysearch(vector<int>arr,int target){
int end=arr.size()-1;
int st=0;;

while(st<=end){
   int  mid=st+(end-st)/2;
   if(target>arr[mid]){
    st=mid+1;
   }
   else if(target<arr[mid] ){
    end=mid-1;
   }
   else{
    return mid;
   }
}
return -1;
}
int main(){
    vector<int>arr={1,2,4,5,6,8,9};
    int target=4;
    cout<<binarysearch(arr,target);
   
}

