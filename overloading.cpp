/*I n C++, Operator overloading is a COMPILE-TIME polymorphism. 
It is an idea of giving special meaning to an existing 
operator in C++ without changing its original meaning.*/
#include<bits/stdc++.h>
using namespace std;
class base{
public:
    int sum(int a, int b){
        return a+b;
    }
    double sum(double a,double b){
        return a+b;
    }
    int sum(int a){
        return a+1;
    }
};
int main(){
    base b;
    int integer=b.sum(2,4);
    cout<<integer<<endl;
    double floating=b.sum(9.2,1.1);
    cout<<floating<<endl;
    int para=b.sum(3);
    cout<<para<<endl;
    return 0;
}