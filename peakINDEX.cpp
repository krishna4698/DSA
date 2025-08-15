#include<iostream>
using namespace std;
#include <vector>

int peakIndexInMountainArray(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++){
     if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
         return i;
     }
    }
}

int main(){
    vector<int>arr={1,2,3,7};
cout<<peakIndexInMountainArray(arr);
}