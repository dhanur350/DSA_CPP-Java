#include<iostream>
using namespace std;
int main(){
    int *a = new int;
    *a=100;
    cout<<*a<<endl;
    delete a;
    cout<<*a;
    return 0;
}