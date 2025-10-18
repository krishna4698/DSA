#include <iostream>
using namespace std;
#include <vector>

// int main(){
//     vector<int>arr={16,17,4,3,5,2};
//     vector<int>a;
//     int n=arr.size()-1;
//        int mr=arr[n];
//     vector<int>a;
//     for(int i=n; i>=0; i--){
//         if(arr[i]>=arr[n]){
//             a.push_back(arr[i]);
//         }
//         mr=max(mr,arr[i]);
//     }
//     return a;
// }


#include<string>
// class teacher{
//  private:
//     double salary;
// public:
// teacher(){
//     cout<<"i am constructor";
// }
// string name;
// string dept;

// void setsal(double s){
//    salary=s;
// }
// double getsal(){
//     return salary;
// }
// };

class person{
    public:
    string name;
    string dept;
    double age;

    person(double age){
cout<<"i am parent constructor \n";
// this->age=age;
cout<<age;
    }
    ~person(){
        cout<<" i am parent destructor \n";
    }
};

// class student:public person{
//     public:

//     student(){
//         cout<<" i am desrived constructor \n";
//     }
//      ~student(){
//         cout<< " iam derived destructor \n";
//      }
//       double rollno;
//       void getinfo(){
//         cout<< "name"<<name<<"\n";
//         cout<< "dept "<<dept<<"\n";
//         cout<< "roll no "<<rollno<<"\n";
//       } 
// };

int main(){
    // teacher t1;
    // t1.name="sahil";
    // t1.dept="cse";
    // t1.setsal(25000);
    // cout<< t1.getsal();
// student s1;
// s1.name="shil";
// s1.dept="cse";
// s1.rollno=25000;
// s1.getinfo();
person p1(22);



};
