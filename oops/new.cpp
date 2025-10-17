#include<iostream>
using namespace std;
class sahil{
    private:

  
public:
  string name;
  int salary;

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
  a1.salary=1000;
  cout<<a1.salary<<endl;
 cout<< a1.name<<endl;

     a1.setsal(100);
 
     cout<<a1.getsal();

}