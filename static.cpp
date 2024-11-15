#include<iostream>
using namespace std;
class student{
public:
  static int count;  
  student(){
    count++;
  }
};
int student::count=0;
int main(){
    cout<<"Initian count is:"<<student::count<<endl;
    student s;
    cout<<"After 1 object count is:"<<student::count<<endl;
}
