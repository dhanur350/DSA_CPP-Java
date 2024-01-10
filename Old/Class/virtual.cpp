#include<iostream>
using namespace std;
class base{
    int var;
    
    public:
    virtual void function(){//Hide
        int result = 100+20-80;
        cout<<result;
    }
};
class derived:public base{
    int var;
    public:
    void function(){
        cout<<"Display derived class";
    }
};
int main(){
    base *bptr;
    base baseobj;
    derived der;//object of derived class
    bptr = &der;
    bptr->function();//base class function will call as per it's by default behaviour

    return 0;
}