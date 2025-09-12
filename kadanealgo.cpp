#include<iostream>
using namespace std;
#include <limits.h>
int main(){
    int arr[7]={3,-4,5,4,8};
    int cs=0; 
    int ms=INT_MIN;
    
    for(int i=0;i<5; i++){
     
        cs+=arr[i];
        ms=max(cs,ms);
        if(cs<0){
            cs=0;
        }
       
    }
    cout<<ms;
}