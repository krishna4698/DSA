#include<iostream>
using namespace std;
#include<vector>
 
// int main(){
//    string s = "A man, a plan, a canal: Panama";
//    int st=0;
//    int end=s.size()-1;
//    while(st<end){
//     if()
//    if(tolower(s[st])!=tolower(s[end])){
//     return false;
//    }
//    st++, end--;
//    }
// }

int main(){
    vector<int>arr={1,2,3,4};
    int product=1;
    for(int i=1; i<=arr.size(); i++){
      product=product*i;
  

    }
    for(int i=1; i<=arr.size(); i++){
      arr[i]= product/i;
      cout<<arr[i]<<'\n'  ;
    }

}