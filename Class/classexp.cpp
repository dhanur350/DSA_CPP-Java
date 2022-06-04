#include <iostream>
#include "inclclass.cpp"
using namespace std;
int main()
{
    classexp *cl = new classexp;
    (*cl).age = 10;//Dynamic declaration method
    (*cl).sno = 1;
    (*cl).hit = 100;
    cout << (*cl).sno << endl;
    cout << (*cl).age << endl;
    cout << (*cl).hit << endl;
    //Dynamic declaration method shortcut method
    cl->age=11;
    cl->sno=2;
    cl->hit=200;
    cout<<cl->age<<" "<<cl->sno<<" "<<cl->hit<<endl;
    return 0;
}