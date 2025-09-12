#include<iostream>
using namespace std;

int main(){
    int st=0;
    int end=4;
 int arr[5]={1,2,3,4,5};
 
 for(int st=0;st<=4; st++){
for(int end=st; end<=4; end++){
    for(int i=st; i<=end; i++){
        cout<<arr[i];
    }
cout<< " ";
}
cout<<endl;
 }

}
