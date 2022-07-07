#include<iostream>
using namespace std;
class base{//Hybrid inheritance
    int b; //This contain one base class 
    public:
    void function(){
        b=10;
        cout<<"value of b"<<b;
    }   
};
class derived1:public base{//This is 1st derived class linked with base class
    int b; 
    public:
    void functionm(){
        b=5;
        cout<<"value of b"<<b;
    }   
};

class derived2:public derived1{//This is 2nd derived class linked with 1st derived class
    int a;
    public:
    void function2(){
        cout<<"Derived class function called";
    }
};
class derived3:public derived2{//This is 3rd derived class linked with 2nd derived class
    int a;
    public:
    void function2(){
        cout<<"Derived class function called";
    }
};
//Due to this a virtual connection is created within derived3 and base class because wh inherited level by level so we can still access base class from derived3 class
int main(){
    derived3 der;//this is leveled inheritance which in multilevel
    der.function2();
    der.function();
    der.functionm();
}