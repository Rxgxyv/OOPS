/*A constructor in programming is a special function that is automatically called when a class is declared 
or an instance of a class is created
Purpose:A constructor prepares a new object for use by initializing its data members and establishing the class's invariant. 
Characteristics:Constructors are similar to instance methods, but they have no explicit return type and 
are not implicitly inherited. They usually have the same name as the class they declare.
also a Constructor can be overloaded. */
#include<bits/stdc++.h>
using namespace std;
class constructor{
    int val;
public:
    constructor(){//DEFAULT CONSTRUCTOR
        val=10;
    }
    constructor(int x){//PARAMATERIZED CONSTRUCTOR
        val=x;
    }
    constructor(constructor &obj){//COPY CONSTRUCTOR
        val=obj.val;
    }
    int getdata(){
        return val;
    }
};
int main(){
    constructor def;//DEFAULT CONSTRUCTOR
    constructor obj(14);//PARAMATERIZED CONSTRUCTOR
    constructor obj2(obj);//COPY CONSTRUCTOR
    cout<<def.getdata()<<endl;
    cout<<obj.getdata()<<endl;
    cout<<obj2.getdata()<<endl;

}