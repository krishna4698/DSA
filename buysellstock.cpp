#include<iostream>
using namespace std;
#include <vector>
#include<algorithm>

int main(){
    vector<int>vec={4,6,2,7,1,8};
    int bestbuy=vec[0];
    int maxprofit=0;
    for(int i=1; i<vec.size(); i++){
        if(vec[i]>bestbuy){
            maxprofit=max(maxprofit,vec[i]-bestbuy);
        }
        bestbuy=min(bestbuy,vec[i]);
    }
    cout<< maxprofit;
}