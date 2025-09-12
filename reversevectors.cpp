#include<iostream>
using namespace std;
#include<vector>

int reversearr(vector<int> &vec){
    int start=0;
    int end=vec.size() - 1;
    while(start<end){
       swap( vec[start],vec[end]);
        start++; 
        end--;   
    }
}
int main(){
vector<int> vec= {1,2,3,4};
reversearr(vec);

for(int val:vec){
    cout<<val<<" ";
}


}
