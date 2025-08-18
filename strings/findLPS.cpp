#include<iostream>
using namespace std;
#include<vector>


int main(){
    string a="aaaa";
    int n=a.length();
     vector<int>lps(n,0);
    int i=1; int len=0;
    while(i<n){
        if(a[i]==a[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    for(int x:lps){
        cout<<x;
    }
}