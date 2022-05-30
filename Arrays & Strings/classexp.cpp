#include <iostream>
using namespace std;
class classexp
{
public:
    int sno, age;
};

int main()
{
    classexp *cl = new classexp;
    (*cl).age = 10;//Dynamic declaration method
    (*cl).sno = 1;
    cout << (*cl).sno << endl;
    cout << (*cl).age << endl;
    //Dynamic declaration method shortcut method
    cl->age=11;
    cl->sno=2;
    cout<<cl->age<<" "<<cl->sno<<endl;
    return 0;
}