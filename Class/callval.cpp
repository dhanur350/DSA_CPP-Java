#include<iostream>
using namespace std;
void callbyval(int *a,int *b){
    cout<<*a<<" "<<*b;
}
int main(){
    int *a,*b;
    *a=10;*b=20;
    callbyval(a,b);
    return 0;
}