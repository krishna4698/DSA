#include<iostream>
using namespace std;

// long long  fac(long long  n){
// if(n==0){
//     return 0 ;
// }
//  return n+ fac(n-1);

// }



// int main(){
//  cout<< fac(3);
// }


 // fibonachi

 int fibo( int n){
    // if(n<=0) return ;
    int a=0; int b=1;
    for(int i=0; i<n; i++){
        cout<<a<<' ';
        int next=a+b;
        a=b;
        b=next;
    }
 }

 int main(){
    cout<< fibo(33);
 }