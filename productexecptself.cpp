#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int array[4];
    for(int i=0; i<5; i++){
    
        int product=1;
        for(int j=0; j<5; j++){
         if(i!=j){
            product *=array[j];
         }
        }
        product=array[i];
    }
   cout<<array;
}