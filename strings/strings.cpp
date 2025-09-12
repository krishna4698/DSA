using namespace std;
#include<iostream>
#include<string>
#include <algorithm>

// int main(){
// string s = "the       sky is blue";
// int n=s.size();
// string word="";
//  reverse(s.begin(), s.end());
//  cout<<s<<'\n';
// for(int i=0; i<n; i++){
//      if (s[i] == ' ') continue;
// string ans;
// while(i<n && s[i]!=' '){
// ans=ans+s[i]; 
// i++;
// }
// reverse(ans.begin(), ans.end());
// // word+=ans;
// word+=" "+ans;





// }
// string c=word.substr(1);
//   cout<<word.substr(1)<<'\n'; 
//   cout<<c.size();
//  }
  
  
int main(){
string s="daabcbaabcbc";
string part="abc";
while(s.length()>0 && s.find(part)< s.length()){
            s.erase(s.find(part) , part.length());
        }
        cout<<s;
}

