#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    // find the length of largest array having ones by swapping k zeros to ones
       vector<int>num={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
int right =0; int left=0; int length=0; int zero=0;
while(right<num.size()){
    if(num[right]==0)  zero++;
      
        while(zero>k){
            if(num[left]==0) zero--;
            left++;
        }
        length=max(length, right-left+1);
        right++;
     
    

} 
cout<<"length is :"<<length;;
    
}