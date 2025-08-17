#include <iostream>
using namespace std;
#include<vector>

int reversearr(int arr[], int size){
    int start=0; int end=size-1;
    while(arr[start]<arr[end]){
       swap(arr[start],arr[end]);
        start++;
        end--;
        
    }

}

// int main(){
//     int arr[5]={1,3,5,6,7};


//     int size=5;
//     reversearr(arr,size);
//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
  
// }

int  main(){
    int a=17;
   int ans=a%2==0?"even":"odd";

}



//   arr=[{4,a} {2,b} {4,b}{ 1,b}]  
 
