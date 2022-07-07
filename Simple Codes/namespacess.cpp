#include<iostream>
using namespace std;
//Using namespaces examples
namespace first
{
    int a,b;
    void functin(){
        cout<<" Using first namespace";
    }
} // namespace first
 namespace second
 {
    void functin(){
        cout<<" Using second namespace";
    }
    int c,d;
 } // namespace second
 
int main(){
    first::a=10;
    first::b=20;
    second::c=30;
    second::d=40;
    cout<<first::a<<endl<<first::b<<endl<<second::c<<endl<<second::d<<endl;
    first::functin();
    cout<<endl;
    second::functin();
    cout<<endl;
    return 0;
}