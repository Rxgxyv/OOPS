/*Abstraction
Definition: Abstraction is the concept of hiding the complex implementation details of a system 
and exposing only the necessary features to the user.
In C++, abstraction can be achieved through Abstract classes, Interfaces (pure virtual functions)
    Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. 
Such a class is called an abstract class.For example, let Shape be a base class. We cannot provide the implementation of 
function draw() in Shape, but we know every derived class must have an implementation of draw().
    A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, 
But we must override that function in the derived class, otherwise, the derived class will also become an abstract class. 
A pure virtual function is declared by assigning 0 in the declaration.*/
#include<iostream>
using namespace std;
class vehicle{
public:
    virtual void startengine() =0 ;
};
class car: public vehicle{
public:
    void startengine(){
        cout<<"Car engine is starting...."<<endl;
    }
};
class bike:public vehicle{
    public:
        void startengine(){
            cout<<"Bike engine is starting...."<<endl;
        }
};

int main(){
    vehicle *myvehicle=new car();
    myvehicle->startengine();
    car mycar;
    mycar.startengine();
    bike mybike;
    mybike.startengine();
}