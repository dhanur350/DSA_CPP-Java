#include<iostream>
using namespace std;
typedef unsigned int b;//-127 to 128 -> typedef do not allow -ve ascii value so we use unsigned value so we can write variable value afterwards
//int range -32767 to 32768 = 65535
int main(){
    b b1;
    b1=65535;
    cout<<b1<<endl;
}