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
    (*cl).age = 10;
    (*cl).sno = 1;
    cout << (*cl).sno << endl;
    cout << (*cl).age << endl;
    return 0;
}