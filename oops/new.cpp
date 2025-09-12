#include<iostream>
using namespace std;
class sahil{
    private:

    int salary;
public:
  string name;

void setsal( int newsalary){
salary=newsalary;
}
int  getsal(){
    return salary;
}

int a;

};
int main(){
    sahil a1;
  a1.name="sahil";
 cout<< a1.name;
     a1.setsal(100);
 
     cout<<a1.getsal();

}