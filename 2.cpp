#include<iostream>
#include<list>`
using namespace std;

int main(){
    int arr[6]={1,2,4,5,7,9};
    int target=10;
    int n = sizeof(arr);
     for(int i=0; i<n; i++){
        int first=arr[i];
        for(int j=i+1; j<n; j++){
            int second=arr[j];
            int sum=first+second;
            if(sum==target){
                cout<<first<<" "<<second<<endl;
            }
        }
     }
}
