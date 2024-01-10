#include<iostream>
using namespace std;
class base{
    int a=10,b=30;
    friend derived;
};
class derived{
    public:
    void derive(base &t){
        cout<<t.a;
    }
};
int main(){
    base c;
    derived d;
    d.derive(c);
}