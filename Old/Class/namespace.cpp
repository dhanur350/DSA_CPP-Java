#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
namespace sp{
    int a;
    int b;
}
int main(){
    sp::a=100;
    cout<<sp::a;
    return 0;
}
