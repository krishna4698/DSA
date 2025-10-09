#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
  vector<char>chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
 
  cout<<m;
    int idx=0; int n=chars.size();
    for(int i=0; i<n; i++){
        int count=0; char ch=chars[i];
         while(i<n && chars[i]==ch){
            i++, count++;
         }
         if(count==1){
            chars[idx++]=ch;
         }
         else{
            chars[idx++]=ch;
            string s=to_string(count);
            for(auto digit:s){
                chars[idx++]=digit;
            }
         }
         i--;
    }
cout<<idx<<endl;
for(auto a:chars){
    cout<<a;
}


}

