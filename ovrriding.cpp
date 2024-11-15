/*RUNTIME-POLYMORPHISM*/
#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
    void behaviour(){
        cout<<"Animal behaviour is execcuted:"<<endl;
    }
};
class Dog: public Animal{
public:
    void behaviour(){
        cout<<"Dog's behavious is executed:"<<endl;
    }
};
int main(){
    Animal *a=new Animal();//parent's behaviour is inherited
    Animal* a1=new Dog(); //child can access all the parent's behavioural methods so animal's behaviour is printed
    Dog* d=new Dog();//child's class gets executed
    //Dog* d1=new Animal(); this will throw an error becaus no child class can create an object for parent class 
    a->behaviour();
    a1->behaviour();
    d->behaviour();
    //d1->behaviour();
}