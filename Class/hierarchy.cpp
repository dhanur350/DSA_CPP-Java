#include<iostream>
using namespace std;
class base{//Multilevel inheritance
    int b; //This contain one base class 
    public:
    void function(){
        b=10;
        cout<<"value of b"<<b;
    }   
};
class derived1:public base{//link upper class
    int b; 
    public:
    void functionm(){
        b=5;
        cout<<"value of b"<<b;
    }   
};

class derived2:public base{//link linked upper class
    int a;
    public:
    void function2(){
        cout<<"Derived class function called";
    }
};
int main(){
    derived2 der;//this is leveled inheritance which in multilevel
    der.function2();
    der.function();
}