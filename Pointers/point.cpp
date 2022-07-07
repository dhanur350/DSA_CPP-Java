#include <iostream>
using namespace std;
int main()
{
    int *pVar, pVar2;
    int *pVar1, value;
    value = 5;
    pVar = &value;
    int val2 = 10;
    pVar1 = &val2;
    // pVar2 = &val2;
    cout
        << "Stored Address of " << value << "value in pVar is " << pVar;
    cout << "Stored Address of " << value << "value in pVar1 & pVar2 is " << pVar1 << " " << pVar2;
    return 0;
}