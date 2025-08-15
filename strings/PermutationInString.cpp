#include<iostream>
using namespace std;

int main(){    
string s1 = "ab", s2 = "eidbaooo";
int freqs1[26]={};   int freqs2[26]={}; 
for(int i=0; i<s1.length(); i++){
 freqs1[s1[i]-'a']++;
}
int windsize=s1.length();

for(int j=0; j<s2.length(); j++){
    int windidx=0, idx=j;
    
    while( windidx<windsize && idx<s2.length()){
        freqs2[s2[idx]-'a']++;
        windidx++,idx++;
    }

}


for(int k=0; k<26; k++){
    if(freqs1[k]!=freqs2[k]){
        return false;
        
    }
    else{
        return true;
    }

    if(true){
        cout<<"true";
    }
}



 



}