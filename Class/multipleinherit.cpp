#include<iostream>
using namespace std;
class base{//Multiple inheritance
    int b; //This contain one base class 
    public:
    void function(){
        b=10;
        cout<<"value of b"<<b;
    }   
};
class base2{
    int b; 
    public:
    void functionm(){
        b=5;
        cout<<"value of b"<<b;
    }   
};

class derived:public base,public base2{//This have other derived class
    int a;
    public:
    void function2(){
        cout<<"Derived class function called";
    }
};
int main(){
    derived der;
    der.function2();
    der.function();
    der.functionm();
}