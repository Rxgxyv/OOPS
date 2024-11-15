#include<iostream>
using namespace std;
class complex{
private:
    int real,img;
public:
    complex(){
        real=0;
        img=0;
    }
    complex(int r, int c){
        real=r;
        img=c;
    }
    complex operator+(const complex &obj){
        complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void print(){
        cout<<"Real is:"<<real<<"\n"<<"Imaginary is:"<<"i"<<img<<"\n";
    }
};
int main(){
    complex c1(10,5);
    complex c2(2,4);
    complex c3=c1+c2;
    c3.print();
}