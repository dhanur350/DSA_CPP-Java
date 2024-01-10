#include<iostream>
using namespace std;
int main(){
    int *a = new int;
    *a=100;
    cout<<*a<<endl;
    *a=200;
    cout<<*a;
    return 0;
}