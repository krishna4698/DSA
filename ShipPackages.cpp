#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using  namespace std;



int finddays(vector<int> &weights, int cap) {
    int requiredays = 1;
    int load = 0;
    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] + load > cap) {
            requiredays++;
            load = weights[i];
        } else {
            load += weights[i];
        }
    }
    return requiredays;
}
int main(){
vector<int>weights={1,2,3,4,5,6,7,8,9,10};
int days=5;
int low= *max_element(weights.begin(), weights.end());
int high= accumulate(weights.begin(), weights.end(),0);
while(low<=high){
    int mid=low+(high-low)/2;
     int noofdays= finddays(weights, mid);
     if(noofdays<=days){
        high=mid-1;

     }
     else{
        low=mid+1;
     }
}
cout<< low;

}